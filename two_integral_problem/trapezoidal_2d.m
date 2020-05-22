% Aim   : To solve the problem 2.d., first use int() to 
%         get the precise value, and then use trapz()
% Author: CHEN Shu
% Date  : 2020/05/21
clear;
aimFunc = @(x) 1./(x.*log(x));
preciseResult = integral(aimFunc,exp(1),exp(1)+1);
result = zeros(1,8);
for n = 1:8
    h = 1/n;
    x = linspace(exp(1),exp(1)+1,n+1);
    y = 1./(x.*log(x));
    result(n) = trapz(x,y);
end
fprintf('The precise result is: %.4f\n',preciseResult);
for i = 1:8
   fprintf('When n = %d, the result by trapezoidal method is %.4f\n',i,result(i)); 
end