% Aim   : To solve the problem 2.a., first use int() to 
%         get the precise value, and then use trapz()
% Author: CHEN Shu
% Date  : 2020/05/21
clear;
aimFunc = @(x) cos(x).^2;
preciseResult = integral(aimFunc,-0.25,0.25);
result = zeros(1,8);
for n = 1:8
    h = (0.25+0.25)/n;
    x = linspace(-0.25,0.25,n+1);
    y = cos(x).^2;
    result(n) = trapz(x,y);
end
fprintf('The precise result is: %.4f\n',preciseResult);
for i = 1:8
   fprintf('When n = %d, the result by trapezoidal method is %.4f\n',i,result(i)); 
end