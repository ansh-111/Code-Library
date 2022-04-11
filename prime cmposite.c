#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,rem;
    scanf("%d",&n);
    for (i =2 ; i<= n/2 ; i++)
    {
        rem = n%i;
    }
    if(rem == 0)
        {
            printf("noprime");
        }
        else
        {
            printf("prime");
        }
}
