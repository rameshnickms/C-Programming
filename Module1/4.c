#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for (int j=0 ;j<n;j++)
        {
        scanf("%d %d",&a[j],&b[j]);
        }
    for (int i=0;i<n;i++)
    {
        
        if(a[i]>b[i])
        {
            printf("%d > %d\n",a[i],b[i]);
        }
        else
        {
            printf("%d > %d\n",b[i],a[i]);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
