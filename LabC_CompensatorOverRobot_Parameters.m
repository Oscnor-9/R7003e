% close all;
% clear all;
% clc;


% % Do not modify these variables
 iNumberOfEncoderSteps	= 720;
 fGyroConversionFactor	=  -1/131%1/131; %250/32768; %-1/131 %250/32768 %-1/131;
 fWheelRadius			= 0.0216; % [m]
 load('GyroBias.mat');
% 
% 
% 
% % select the sampling time
 fSamplingPeriod = 0.005;
 %fSamplingPeriod = 0.015; %1.94 %0.075 %1/200;
% fSamplingPeriod = 0.04;
%


A = 1.0e+03 * [
         0    0.0010         0         0
         0   -0.4350   -0.0061    0.0091
         0         0         0    0.0010
         0    1.9034    0.0620   -0.0400
]

B = [
         0
   20.6000
         0
  -90.0000
]

% [x_w, dot(x_w) theta_b dot(theta_b)]
C = [4 1 11 3]
C_n = [4 1 11 3]
D=[0]
%C = [
%     1     0     0     0
%     0     0     1     0
%]

sys=ss(A,B,C,D)
sys_d= c2d(sys,fSamplingPeriod,'ZOH')
[A_d,B_d,C_d,D_d] = ssdata(sys_d)
scale_obs=2;
poless =[-400,-3.6,-3.7,-4.5*4]; %[-150,-5.6,-5.65,10*-5.7]
mapped_poles = exp(poless*fSamplingPeriod)
%[poles,zeros] = pzmap(sys_d)

disp("ackur")
Kd = acker(A_d,B_d,mapped_poles) %-475,-5.6,-5.65,-4*5.65])
%disp(Kd)

C = [
    1     0     0     0
    0     0     1     0
]

D=[0
   0]

sys=ss(A,B,C,D)
sys_d= c2d(sys,fSamplingPeriod,'ZOH')
[Ad,Bd,Cd,Dd] = ssdata(sys_d)


% We pick the root location that minimize 
rho = 31.4 %33.2 %32 %88.4

Q=rho*C_n'*C_n % State-cost matrix 
[Kd, P_dlqr, e_dlqr]=dlqr(Ad,Bd,Q,1);
disp("sigma snack ")
% Ad
% Bd
% Cd
% Kd

%% Observer state-space to descrete
C_acc=[1 0 0 0];
C_nacc=[0 0 1 0];

T_inv=[C_acc;
     0 1 0 0;
     0 0 1 0;
     0 0 0 1];

T=inv(T_inv);
A_tilde=T_inv*Ad*T;
B_tilde=T_inv*Bd;
C_acc_tilde = C_acc*T;
C_nacc_tilde = C_nacc * T;

A_yy=A_tilde(1,1);
A_yx=A_tilde(1,2:4);
A_xy=A_tilde(2:4,1);
A_xx=A_tilde(2:4,2:4);


C_tilde_y = C_nacc_tilde(1,1);
C_tilde_chi = C_nacc_tilde(1,2:4);
B_tilde_y = B_tilde(1,1);
B_tilde_chi = B_tilde(2:4,1);
CC = [A_yx; C_tilde_chi];

obs_poles = scale_obs*poless(1,2:4);
mapped_obs_poles = exp(obs_poles*fSamplingPeriod);

L = (place(A_xx', CC',mapped_obs_poles))';

L_acc = L(1:3,1);
L_nacc= L(1:3,2);

%3x3 - 1x1 * 1x3  - 2x1 * 1x3  
Md1 = A_xx - L_acc*A_yx-L_nacc*C_tilde_chi
Md2 = B_tilde_chi - L_acc *B_tilde_y
Md3 = (A_xy - L_acc*A_yy - L_nacc*C_tilde_y)
Md4 = L_nacc
Md5 = L_acc
Md6 = T(1:4,1)
Md7 = T(1:4,2:4)

% Observer: x_hat_dot = Ax_hat + Bu + L(y-Cx_hat)

L_obs_full_poles = scale_obs*poless;
map_L_full_obs_pole = exp(L_obs_full_poles*fSamplingPeriod);
Ld = (place(Ad', Cd',map_L_full_obs_pole))'

%N = inv(Cd*inv(-Ad+Bd*Kd)*Bd)
Nxd = inv(C_acc*inv(eye(4)-Ad+Bd*Kd)*Bd)
Nud=0

% 
% Ld = [
% 	0.0723    0.0028
%     0.0015    0.0464
%     0.0030    0.2118
%     0.0399    2.1508
% ]
% 
% 
% Md1 = [
%     0.1066   -0.0417    0.0156
%    -0.0561    0.9865    0.0029
%     0.5176    0.0215    0.8387
% ]
% 
% Md2 = [
%     0.0355
%    -0.0048

%    -0.3641
% ]
% 
% Md3 = 1.0e+03 * [
%    -0.0288
%    -0.0316
%    -1.4370
% ]
% 
% Md4 = [
%     0.0331
%     0.0152
%     0.2480
% ]
% 
% Md5 = 1.0e+03 * [
%     0.0288
%     0.0316
%     1.4370
% ]
% 
% Md6 = [
%      1
%      0
%      0
%      0
% ]
% 
% Md7 = [
%      0     0     0
%      1     0     0
%      0     1     0
%      0     0     1
% ]
% 
% Ad = [ 
%     1.0000    0.0022   -0.0000    0.0001
%          0    0.1691   -0.0096    0.0173
%          0    0.0124    1.0006    0.0047
%          0    3.6345    0.2183    0.9237
% ]
% 
% Bd = [ 
%     0.0001
%     0.0394
%    -0.0006
%    -0.1715
% ]
% 
% Cd = [ 
%      1     0     0     0
%      0     0     1     0
% ]
% 
% Dd = [
%      0
%      0
% ]
% 
% Kd = [-8.1792  -49.1223  -71.4928  -11.5909]
% 


%Kd =[-408.8410 -214.2537 -301.6809  -49.1737]

%Kd = [-91.0748  -61.2069 -197.4516  -14.3652]