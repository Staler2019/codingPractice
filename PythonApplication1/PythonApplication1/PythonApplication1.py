
from pylab import*

def f(x):
    return maximum(abs(x*sin(x)), abs(x*cos(x)))
def g(x):
    return minimum(abs(x*sin(x)), abs(x*cos(x)))

a = linspace(-2*pi,2*pi,2000)
y1, y2 = f(a), g(a)
figure(figsize=(15,6))
title("f(x)=max( abs(x sin(x)), abs(x cos(x)) ), g(x)=min( abs(x sin(x)), abs(x cos(x)) )")
xlabel("X")
ylabel("Y")
grid()
plot(a,y1)
show()