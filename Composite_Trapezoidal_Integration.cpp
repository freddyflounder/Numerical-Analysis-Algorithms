#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
  return x*x*cos(x);
}

double trap(double a, double b, double n)
{
  double h=(b-a)/n;
  int nn=n;
  double xi[nn+1], xx=0;
  for(int j=0; j<n; j++)
    xi[j]=a+j*h;
  for(int j=1; j<=n-1; j++)
    xx=xx+f(xi[j]);
  return (h/2)*(f(a)+2*xx+f(b));
}

int main() {
  double a, b, n;
  cout<<"input your a and b for lower and upper bounds respectively.";
  cin>>a>>b;
  cout<<"Input n value.";
  cin>>n;
  cout<<"The integral's value is: "<<trap(a,b,n);
}
