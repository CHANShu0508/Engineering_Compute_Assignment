% Aim   : To solve the difference problem, first use 
%         interpolation method and then calculate the 
%         difference.
% Author: CHEN Shu
% Date  : 2020/05/21
clear;
x1 = 0.5:0.1:0.7;
x2 = 0:0.2:0.4;
y1 = [0.4794 0.5646 0.6442];
y2 = [0.0000 0.7414 1.3718];
p1 = polyfit(x1,y1,2);
p2 = polyfit(x2,y2,2);
syms a b;
f1(a) = p1(1).*a.^2+p1(2).*a+p1(3);
f2(b) = p2(1).*b.^2+p2(2).*b+p2(3);
difference1(a) = diff(f1(a),a);
difference2(b) = diff(f2(b),b);
result1 = difference1(x1);
result2 = difference2(x2);
for i = 1:3
    fprintf('In the first question: f''(%.1f)=%.6f\n',x1(i),result1(i));
end
for i = 1:3
    fprintf('In the second question: f''(%.1f)=%.6f\n',x2(i),result2(i));
end