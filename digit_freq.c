#include<stdio.h>
int main()
{
    int i,l,a[]={0,0,0,0,0,0,0,0,0,0};
    char s;
    scanf("%s",&s);
    l=strlen(s);
    while(l--)
    {
        if(s>'0'&&s<'9')
        a[s-'0']+=1;
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
