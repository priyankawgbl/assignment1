#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void main()
{
  int a[2][3],b[2][3],c[2][3],d[2][3];
  int f[5]={1011};

  for(int i=0;i<2;i++)
  {
    for (int j=0;j<3;j++)
    {
    scanf("%d",&a[i][j]);

    }
  }
   for(int i=0;i<2;i++)
  {
    for (int j=0;j<3;j++)
    {
    scanf("%d",&a[i][j]);

    }
  }
  for(int i=0;i<2;i++)
  {
    for (int j=0;j<3;j++)
    {
    c[i][j]=a[i][j]&b[i][j];
    }
  }
  for(int i=0;i<2;i++)
  {
    for (int j=0;j<3;j++)
    {
    d[i][j]=c[i][j] || a[i][j];
    }
  }
  int decimal=0;
  int u=4
  int k=u-1;
  for (int j=0;j<4;j++)
    {
    if(a[j]==1)
      decimal=decimal+ pow(2,k);
    k--;
    }
printf("%d",decimal);

}
