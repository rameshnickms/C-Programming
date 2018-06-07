#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
    for (int j=0 ;j<n;j++)
        {
        scanf("%d %d %d %d",&a[j],&b[j],&c[j],&d[j]);
        }
    for (int i=0;i<n;i++)
    {
        
        if((a[i]>b[i])&& (a[i]>c[i])&&(a[i]>d[i]))
        {
            printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],a[i]);
        }
        if((b[i]>a[i])&& (b[i]>c[i])&&(b[i]>d[i]))
        {
            printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],b[i]);
        }
         if((c[i]>b[i])&& (c[i]>a[i])&&(c[i]>d[i]))
        {
            printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],c[i]);
        }
         if((d[i]>b[i])&& (d[i]>a[i])&&(d[i]>c[i]))
        {
            printf("Largest of %d, %d, %d, %d is %d\n",a[i],b[i],c[i],d[i],d[i]);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
