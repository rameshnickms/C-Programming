#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int j=0; j<n;j++)
    {
      c[j]=a[j];
    while(a[j]>=b[j])
    {
      a[j]=a[j]-b[j];
      f++;
    }
    printf("%d / %d = %d\n",c[j],b[j],f);
    printf("%d %% %d = %d\n",c[j],b[j],a[j]);
    
    f=0;
    } 
    return 0;
}
