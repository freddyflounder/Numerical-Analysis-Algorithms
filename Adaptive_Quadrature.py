import numpy as np
import math
#y'=f(t,y), a<=t<=b, y(a)=alph
def f(t, y):
  return (1/t)*(y*y+y)

def y(t):
  return (2*t)/(1-2*t)

#Euler's method: input:
  #endpoints a,b; integer N; initial value alph
#output: approximation w to y at the (N+1) values of t
def eulerm(a,b,N,alph):
  h=(b-a)/N
  t=a
  w=alph
  print("(",t,",",w,")")
  for i in range(N):
    w=w+h*f(t,w)
    t=a+i*h
    print("(",t,",",w-y(t),")")

eulerm(1,3,10,-2)
