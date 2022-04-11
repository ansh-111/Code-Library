#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,rem,sum=0;
    scanf("%d",&num);
    n = num;
    while(num>0)
    {
        rem=num%10;
        num = num/10;
        sum = sum + pow(rem,3);

    }
    if(n==sum)
    {
        printf("armstrong no");
    }
    else
    {
        printf("not a armstrong no");
    }

}
