close all;
clear all;
clc;

kP = -404.3247;
kI = -2.2604e+03;
kD = -0.8411;

% Same parameter block as in Lab A
g   = 9.8;
m_b = 0.381;  l_b = 0.112;  I_b = 0.00616;
m_w = 0.036;  l_w = 0.021;  I_w = 0.00000746;
R_m = 4.4;    K_e = 0.444;  K_t = 0.470;

gamma_11 = l_w*(m_w + m_b) + (I_w/l_w);
gamma_12 = l_w*l_b*m_b;
gamma_21 = m_b*l_b;
gamma_22 = I_b+m_b*l_b^2;

alpha_11 = 0;
alpha_12 = -((K_t*K_e)/(R_m*l_w));
alpha_13 = 0;
alpha_14 = ((K_t*K_e)/R_m);
alpha_21 = 0;
alpha_22 = (K_t*K_e)/(R_m*l_w);
alpha_23 = m_b*l_b*g;
alpha_24 = -((K_t*K_e)/R_m);

beta_11 = K_t/R_m;
beta_21 = -K_t/R_m;

gamma = [gamma_11, gamma_12; gamma_21, gamma_22];
alpha = [alpha_11, alpha_12, alpha_13, alpha_14;
         alpha_21, alpha_22, alpha_23, alpha_24];
beta  = [beta_11; beta_21];

A_small = gamma\alpha;
B_small = gamma\beta;

A = [0 1 0 0;
     A_small(1,:);
     0 0 0 1;
     A_small(2,:)];
B = [0; B_small(1); 0; B_small(2)];

C = [1 0 0 0
    ;0 0 1 0];

D = zeros(2,1);

poles = [-475.0690; -5.6571; -3.6; -43.2];
L = place(A', C', poles)';

T= eye(4);
T_inv = eye(4);
A_tilde = T*A*T_inv;
B_tilde = T_inv*B;
C_tilde = C * T_inv;

A_yy = A_tilde(1,1);
A_yx = A_tilde(1,2:4);
A_xy = A_tilde(2:4,1);
A_xx = A_tilde(2:4,2:4);

B_y = B_tilde(1)
B_x = B_tilde(2:4)

C_tilde_y = C_tilde(2,1);
C_tilde_x = C_tilde(2,2:4);

CC = [A_yx; C_tilde_x];

p_red = [-5.6571; -3.6; -43.2];
L_red = (place(A_xx', CC', p_red))';
L_red_acc = L_red(:,1);
L_red_nacc = L_red(:,2);



M1 = A_xx - L_red_acc*A_yx - L_red_nacc*C_tilde_x;
M2 = B_x - L_red_acc*B_y;
M3 = A_xy - L_red_acc*A_yy - L_red_nacc*C_tilde_y;
M4 = L_red_nacc;
M5 = L_red_acc;
M6 = T_inv(:,1);
M7 = T_inv(:,2:4);



% 
% M1 = 1.0e+03 * [
%    -0.4358   -0.0072    0.0091
%    -0.0011   -0.0340    0.0010
%     1.8717   -0.0165   -0.0400
% ]
% 
% M2 = [
%    20.6000
%          0
%   -90.0000
% ]
% 
% M3 = [
%      0
%      0
%      0
% ]
% 
% M4 = [
%     1.1459
%    33.9942
%    78.4584
% ]
% 
% M5 = [
%     0.7598
%     1.1459
%    31.6987
% ]
% 
% M6 = [
%      1
%      0
%      0
%      0
% ]
% 
% M7 = [
%      0     0     0
%      1     0     0
%      0     1     0
%      0     0     1
% ]
% 
% L = [
%    15.0196    0.5900
%    -2.7287   18.9345
%     0.6038   44.9804
%    22.1715  435.4379
% ]
% 
% A = 1.0e+03 * [
%          0    0.0010         0         0
%          0   -0.4350   -0.0061    0.0091
%          0         0         0    0.0010
%          0    1.9034    0.0620   -0.0400
% ]
% 
% B = [
%          0
%    20.6000
%          0
%   -90.0000
% ]
% 
% C = [
%      1     0     0     0
%      0     0     1     0
% ]
% 
% D = [
%      0
% ]
% 
