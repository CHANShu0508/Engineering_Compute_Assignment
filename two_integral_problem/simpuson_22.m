% Aim   : To solve the problem, use trapzoid method to approach the value
% Author: CHEN Shu
% Date  : 2020/05/21
clear;
time = 0:6:84;
speed = [124 134 148 156 147 133 121 109 99 85 78 89 104 116 123];
result = trapz(time,speed);

fprintf('The track is %.0f feet.\n',result);