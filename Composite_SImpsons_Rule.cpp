#include <iostream>
using namespace std;
#include<cmath>

double f(double x)
{
  return x*x*cos(x);
}

double simp(double a, double b, double n)
{
  double h=(b-a)/n;
  double xi[3];
  double x, xx;
  xi[0]=f(a)+f(b);
  xi[1]=0;
  xi[2]=0;
  for(int i=1; i<n; i++)
    {
      x=a+i*h;
      if (i%2==0)
        xi[2]=xi[2]+f(x);
      if (i%2==1)
        xi[1]=xi[1]+f(x);
    }
  xx=h*(xi[0]+2*xi[2]+4*xi[1])/3.0;
  return xx;
}

int main() {
  double a, b, n;
  cout<<"input your a and b for lower and upper bounds respectively.";
  cin>>a>>b;
