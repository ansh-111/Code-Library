#include<stdio.h>
int s[10];int visited[10];int top=-1;int size=10;
void push(int n)
{
    if(top==size-1)
        printf("Overflow\n");
    s[++top]=n;
}
void pop()
{
    if(top==-1)
        printf("EMPTY!!");
    top--;
}
int main()
{
  push(10);
  push(20);
  pop();
  push(100);
  push(200);
  push(11);
  pop();
    for(int i=0;i<=top;i++)
        printf("%d ",s[i]);
}
