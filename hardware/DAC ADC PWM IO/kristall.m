# HSE
C0 = 5;
CL = 12;
Cs = 5;
F = 8;
ESR = 100;
gm = 10;

gmcrit = 1000*4*ESR*(2*pi*F*10^6)^2*(C0*10^(-12) + CL*10^(-12))^2 % mA/V
gainmargin = gm/gmcrit

C = 2*(CL - Cs)
C = 15  
R = 1/(2*pi*F*10^6*C*10^(-12)) % kOhm
R = 1500

gmcrit = 1000*4*(ESR+R)*(2*pi*F*10^6)^2*(C0*10^(-12) + CL*10^(-12))^2 % mA/V
gm > gmcrit % Need to be higher than gmcrit

disp(''); % New line

# LSE
C0 = 1.3;
CL = 12.5;
Cs = 5;
F = 32.768;
ESR = 90*1000;
gm = 25; % High crit

gmcrit = 1000*4*ESR*(2*pi*F*10^3)^2*(C0*10^(-12) + CL*10^(-12))^2 % mA/V
gainmargin = gm/gmcrit

C = 2*(CL - Cs)

