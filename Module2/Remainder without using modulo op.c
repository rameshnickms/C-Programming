#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int j=0; j<n; j++)
    {
        if((a[j] & 1)==0)
        {
            printf("EVEN\n");
        }
        else
        {
        printf("ODD\n");    
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
