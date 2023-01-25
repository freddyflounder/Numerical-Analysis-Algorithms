#include <iostream>
using namespace std;
#include <cmath>

double f(double x)
{
  return x*x*cos(x);
}

double mid(double a, double b, double n)
{
  int nn=n;
  double h=(b-a)/(n+2);
  double xi[nn+2], xx=0;
  for(int j=-1; j<n+2; j++)
    {
      xi[j+1]=a+(j+1)*h;
    }
  for(int j=0; j<=(n/2); j++)
    {
      xx=xx+f(xi[2*j]);
    }
  return 2*h*xx;
}

int main() {
  double a, b, n;
  cout<<"input your a and b for lower and upper bounds respectively.";
  cin>>a>>b;
  cout<<"Input n value.";
  cin>>n;
  cout<<"The integral's value is: "<<mid(a,b,n);
}
