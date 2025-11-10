clear;
fprintf('loading the physical parameters...');
g   = 9.8;
b_f = 0;
m_b = 0.381;
l_b = 0.112;
I_b = 0.00616;
m_w = 0.036;
l_w = 0.021;
I_w = 0.00000746;
R_m = 4.4;
L_m = 0;
b_m = 0;
K_e = 0.444;
K_t = 0.470;
fprintf('done\n');


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
alpha = [alpha_11, alpha_12, alpha_13, alpha_14; alpha_21, alpha_22, alpha_23, alpha_24];
beta = [beta_11; beta_21];

A = gamma\alpha;
B = gamma\beta;

a_1 = [0, 1, 0, 0];
a_2 = A(1:1,1:4);
a_3 = [0, 0, 0, 1];
a_4 = A(2:2,1:4);
A = [a_1; a_2; a_3; a_4];

b_1 = 0;
b_2 = B(1:1,1:1);
b_3 = 0;
b_4 = B(2:2,1:1);
B = [b_1; b_2; b_3; b_4];

C = [0, 0, 1, 0];

D = 0;

%task3.4------------
[z, p, k] = ss2zp(A,B,C,D);
z = [0];
p = p(2:end, 1);
[num, den] = zp2tf(z,p,k);
plant = tf(num, den)

%task3.5-----------
dp = abs([p(p < 0, :); -70]);
den = den(1,2:end);

kP = (dp(1)*dp(2) + dp(2)*dp(3) + dp(1)*dp(3) - den(2)) / k
kI = (dp(1)*dp(2)*dp(3) - den(3)) / k
kD = (sum(dp) - den(1)) / k



%task3.7------------
g_inv = inv(gamma) * [l_w; l_b];
B_for_poking =[ 0 0; B(2) g_inv(1); 0 0; B(4) g_inv(2) ]; 
C_for_full_observability = eye(4);
D_for_full_observability_and_poking = zeros(4,2);


controller = pid(kP, kI, kD);
bw = bandwidth(controller*plant) + bandwidth(1+controller*plant);
T = (2*pi)/(30*bw);



% %task4.5.1------------------
% Ob = obsv(A,C)
% Obrank = rank(Ob);
% co = ctrb(A, B)
% rank(co);
% 
% if Obrank==obsv(A,C)
%     fprintf('system is observable');
% else
%     fprintf('fuck this shit');
% end
% 
% 
% 
% %task4.6.1---------------
% pc = [-475.0690; -5.6571; -5.72; -70]; %insert poles
% K2 = acker(A,B,pc)
% %% LQR. 4.7.1
% rho = 1;
% C = [25,1,15,1];
% Q = rho*transpose(C)*C;
% R = 1;
% 
% %LQR K task 4.7.1
% K = lqr(A, B, Q, R)
% 
% 
% sys = feedback(plant, controller);
% rlocus(sys, K);





