#include<stdio.h>
#include<stdlib.h>
struct node
{
    int no;
    struct node *next,*prev;
};
typedef struct node *list;
list getnode();
list addno(list first);
void check(list first);
void display(list first);
int main()
{
    list first=NULL;
    int t;
    while(1)
    {
        printf("\n1.ADD NUMBER\n2.CHECK FOR PAIR SUM\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&t);
        switch(t)
        {
            case 1:first=addno(first);
            break;
            case 2:check(first);
            break;
            case 3:display(first);
            break;
            case 4:exit(0);
            break;
        }
    }
}
list getnode()
{
    list temp=malloc(sizeof(*temp));
    temp->next=NULL;
    temp->prev=NULL;
    if(temp==NULL)
        printf("ERROR!!");

    else
    {
        printf("ENTER NUMBER\n");
        scanf("%d",&temp->no);
        return temp;
    }
}
list addno(list first)
{
    list temp=getnode();
    if(first==NULL)
        first=temp;
    else
    {
        first->prev=temp;
        temp->next=first;
        first=temp;
    }
    return first;
}
void check(list first)
{
    list temp=first;
    int nu,sum=0,flag=1;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&nu);
    while(first!=NULL)
    {
        sum=0,temp=first->next;
        while(temp!=NULL)
        {
        sum=0;
        sum=first->no+temp->no;
        if(sum==nu)
        {
            flag=0;
            printf("MATCH FOUND %d %d\n",first->no,temp->no);
            break;
        }
        temp=temp->next;
        }
        if(flag==0)
            break;
        first=first->next;
    }
}
void display(list first)
{
    list t=first;
    if(first==NULL)
        printf("list is empty!");

    else
    {
        while(t!=NULL)
        {
             printf("%d-->",t->no);
             t=t->next;
        }
    }
}
