import math
def integral(x):
        return math.sin(x) * math.log(1 + x)/ math.pow(x, 2.5)
eps = 0.0001
b = 9.0
a = math.fabs((eps - 2)*(eps - 2) / 4 - 1);
c = 10000.0
h = (b - a) / c
p = 0
p_temp=1
n=0
while (math.fabs(p - p_temp) > eps):
    p_temp = p
    c = c+10000
    h = (b - a) / c
    p = 0
    i = a
    n=n+1
    while(i<b):
        i =i+h
        p=p+h*integral(i)


print(p)
print(n)
 
