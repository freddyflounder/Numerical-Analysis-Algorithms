#include <iostream>
using namespace std;

void nvMethod(double xx, double x[], double y[])
{
  int sizex=(sizeof(x[])/sizeof(x[0])), i, j;
  double q[sizex][sizex];
  for(i=0; i<sizex; i++)
    {
      for(j=0; i<sizex; i++)
        {
          q[i][j]=0;
        }
    }
  for(i=0; i<sizex; i++)
    {
      q[i][0]=y[i];
    }
  for(i=0; i<sizex; i++)
    {
    for(j=0; j<i; i++)
      {
        q[i][j]=((xx-x[i-j])(q[i][j-1])-(xx-x[i])(q[i-1][j-1]))/(x[i]*x[i-j]);
      }
    }
  for(i=0; i<sizex; i++)
    {
      for(j=0; i<sizex; i++)
        {
          cout<<q[i][j]<<"\t";
        }
      cout<<endl;
    }
}

int main() {
