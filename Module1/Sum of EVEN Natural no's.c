#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    int f=0;
    scanf("%d",&n);
    int a[n],sum=0;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    while(f<n)
    {
    for(int j=1; j<=a[f];j++)
    {
        sum+=2*j;
    }
        printf("%d\n",sum);
    f++;
    sum=0;
    }   
    return 0;
}
