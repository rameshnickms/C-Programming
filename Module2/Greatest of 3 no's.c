#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ 
  int n;
  scanf("%d",&n);
  int a[n],b[n],c[n];
  for (int i=0;i<n;i++)
  {
   scanf("%d %d %d",&a[i],&b[i],&c[i]);
  }
  for(int j=0;j<n;j++)
  {
  if(a[j]>b[j])
  {
    if(a[j]>c[j])
    {
      if(b[j]>c[j])
      {
        printf("%d > %d > %d\n",a[j],b[j],c[j]);
      }
      else
      {
        printf("%d > %d > %d\n",a[j],c[j],b[j]);
      }
    }
    else
    {
      printf("%d > %d > %d\n",c[j],a[j],b[j]);
    }
  }
  else
  {
    if(b[j]>c[j])
    {
      if(a[j]>c[j])
      {
        printf("%d > %d > %d\n",b[j],a[j],c[j]);
      }
      else
      {
        printf("%d > %d > %d\n",b[j],c[j],a[j]);
      }
    }
    else
    {
      printf("%d > %d > %d\n",c[j],b[j],a[j]);
    }
  }
  }
    return 0;
}
