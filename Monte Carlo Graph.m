file=load("RandomWalk.txt");
x=file(:,1);
y=file(:,2);
plot(x,y,'o')
xlabel("log10 (N)")
ylabel("Mean Of Random Numbers ")
title({'Mean Of Random Numbers',  'VS Mean Of Random Numbers Sum'})