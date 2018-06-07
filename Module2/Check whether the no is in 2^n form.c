#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,p,f=0,o=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    while(o<n)
    {
    for (int j=0; j<a[o]; j++)
    {   
        p=pow(2,j);
       if(a[o] == p)
      {
       f=1;
       printf("YES\n");
       break;
      }
   }
      if(f==0)
      {
      printf("NO\n");
       }
    f=0;
    o++;
    }
    return 0;
}
