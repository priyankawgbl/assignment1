#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int count2(int *b,int j,int n);

void main()
{
  int n, k;
  int a[100];
  printf("enter value of n" );
  scanf("%d",&n);
  printf("enter value of k" );
  scanf("%d",&k);
  printf("enter value of array" );

  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  for (int i=0;i<n;i++)
  {
    int c = a[i];

    int sum = count2(a,c,n);

    if(sum >= (n/k))
    {
      printf("%d\n",a[i]);
    }
  }
}

int count2(int *b,int j,int n)
  {
    int s=0;
    for (int i=0;i<n;i++)
    {
    if(j==*(b+i))
      s++;
    }
    return s;
  }