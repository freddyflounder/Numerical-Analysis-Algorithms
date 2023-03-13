import math

def f(t,x):
  A=math.pi*(512/x)
  return -0.6*math.pi*0.1*0.1*math.sqrt(2*32.1*t*t)*(math.sqrt(x)/A)

def rk4(a, b, N, alph): #precondition: endpoints a, b; integer N; initial condition alpha;
  #postcondition: approximation w to y at the (N+1) values of t
  h=(b-a)/N
  t=a
  w=alph
  print("(",t,",",w,")")
  for i in range(1,N):
    K=[]
    K.append(h*f(t,w))
    K.append(h*f(t+h/2, w+K[0]/2))
    K.append(h*f(t+h/2, w+K[1]/2))
    K.append(h*f(t+h, w+K[2]))
    w=w+(K[0]+2*K[1]+2*K[2]+K[3])/6
    t=a+i*h
    print("(",t,",",w,")")

rk4(0,2000,30,8)
