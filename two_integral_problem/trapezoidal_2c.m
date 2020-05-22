% Aim   : To solve the problem 2.c., first use int() to 
%         get the precise value, and then use trapz()
% Author: CHEN Shu
% Date  : 2020/05/21
clear;
aimFunc = @(x) sin(x*pi/180).^2-2*x.*sin(x*pi/180)+1;
preciseResult = integral(aimFunc,0.75,1.3);
result = zeros(1,8);
for n = 1:8
    h = (0.3-0.75)/n;
    x = linspace(0.75,1.3,n+1);
    y = sin(x*pi/180).^2-2*x.*sin(x*pi/180)+1;
    result(n) = trapz(x,y);
end
fprintf('The precise result is: %.4f\n',preciseResult);
for i = 1:8
   fprintf('When n = %d, the result by trapezoidal method is %.4f\n',i,result(i)); 
end