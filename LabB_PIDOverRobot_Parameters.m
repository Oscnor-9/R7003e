close all;
clear all;
clc;



% load the PID
kP =-272.8278
kI = -2.3923*10^(3)
kD =0.1667

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

C = [
     1     0     0     0
     0     0     1     0
]

D = [
     0
]

O=[C; C*A; C*A^2; C*A^3];
rank(O)
disp("sigma o");
C_acc=[1 0 0 0];
C_nacc=[0 0 1 0];
T_inv=[C_acc;
     0 1 0 0;
     0 0 1 0;
     0 0 0 1];
T=inv(T_inv);
A_tilde=T_inv*A*T
B_tilde=T_inv*B
C_acc_tilde = C_acc*T
C_nacc_tilde = C_nacc * T

A_yy=A_tilde(1,1)
A_yx=A_tilde(1,2:4)
A_xy=A_tilde(2:4,1)
A_xx=A_tilde(2:4,2:4)


C_tilde_y = C_nacc_tilde(1,1)
C_tilde_chi = C_nacc_tilde(1,2:4)

B_tilde_y = B_tilde(1,1);
B_tilde_chi = B_tilde(2:4,1);
CC = [A_yx; C_tilde_chi]
L = (place(A_xx', CC',3*[-5.6, -5.65, -4*5.65]))'

L_acc = L(1:3,1)
L_nacc= L(1:3,2)

%3x3 - 1x1 * 1x3  - 2x1 * 1x3  
M1 = A_xx - L_acc*A_yx-L_nacc*C_tilde_chi
M2 = B_tilde_chi - L_acc *B_tilde_y
M3 = (A_xy - L_acc*A_yy - L_nacc*C_tilde_y)
M4 = L_nacc
M5 = L_acc
M6 = T(1:4,1)
M7 = T(1:4,2:4)


C_est = [1 0 0 0 ; 0 0 1 0];
L = (place(A', C_est', 3*[-400, -5.6/3, -5.65/3, -4*5.65]))'

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
