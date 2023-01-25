#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
  return cos(x)*cos(x);
}


void romberg(double a, double b, double n)
{
  int nn=n;
  double h=b-a, sum=0;
  double r[nn+1][nn+1];
  r[1][1]=(h/2)*(f(a)+f(b));
  cout<<"R_1,1 = "<<r[1][1]<<endl;
  for(int i=2; i<=nn; i++)
    {
      for(int k=1; k<=pow(2, i-2); k++)
        {
          sum=f(a+(k-0.5)*h);
        }
      r[2][1]=0.5*(r[0][0]+h*sum);
      for(int j=2; j<=i; j++)
        r[2][j]=r[1][j-1]+(r[1][j-1]-r[0][j-1])/(pow(4,j-1)-1);
      for(int j=1; j<i; j++)
        cout<<"R_"<<i-1<<","<<j<<"= "<<r[1][j]<<" ";
      h=h/2;
      for(int j=1; j<=i; j++)
        r[1][j]=r[2][j];
      cout<<endl;
    }

}

int main() {
  romberg(5,10,4);
}
