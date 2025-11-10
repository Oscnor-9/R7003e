close all;
clear all;
clc;

kP = -404.3247
kI = -2.2604e+03
kD = -0.8411

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

C = [0 0 1 0];
D = zeros(2,1);

%task4.5.1
O = obsv(A,C);
rankO = rank(O);

Ctl = ctrb(A, B);
rankC = rank(Ctl);

%task4.6.1
%pc = [-475.0690; -5.6571; -5.72; -43.2];
%K = place(A,B,pc)

%4.7.1
% rho = 1;
% CQ = [25,1,15,1];
% Q = rho*transpose(CQ)*CQ
% R = 1;
% 
% K = lqr(A,B,Q,R)

s = tf('s')
G_pos = ( -90.03* s ) /(( s +475) *( s +5.65) *( s -5.72) ) ;
G_neg = ( -90.03* - s ) /(( - s +475) *( - s +5.65) *( -s -5.72) );
sysGG = G_neg*G_pos
rlocus(sysGG)

all_roots = rlocus(sysGG, 1);
neg_roots = all_roots(all_roots<=0)

%task4.8...
% C_acc =[1 0 0 0];
% C_nacc = [0 0 1 0];
% T_inv=[C_acc;
%      0 1 0 0;
%      0 0 1 0;
%      0 0 0 1];
% T=inv(T_inv);
% A_tilde = T_inv *A*T;
% B_tilde = T_inv * B;
% C_tilde_acc = C_acc * T;
% C_tilde_nacc = C_nacc * T;
% 
% Ayy = A_tilde(1,1);
% Ayx = A_tilde(1,2:4);
% Axy = A_tilde(2:4,1);
% Axx = A_tilde(2:4,2:4);
% 
% B_y = B_tilde(1,1);
% B_x = B_tilde(2:4,1);
% 
% C_y = C_tilde_nacc(1,1);
% C_x = C_tilde_nacc(2:end);
% CC = [Ayx; C_x];


%L = ( place( Axx', CC', afPoles ) )'



