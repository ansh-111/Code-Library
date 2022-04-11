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
list addrear(list first);
int main()
{
    list first=NULL;
    int t;
    while(1)
    {
        printf("\n1.ADD NUMBER IN FRONT \n2.CHECK FOR PALINDROME\n3.DISPLAY\n4.EXIT\n5.ADD NUMBER IN REAR\n");
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
            case 5:first=addrear(first);
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
list addrear(list first)
{
    list temp=getnode();
    list t=first;
    if(first==NULL)
    {
    first=temp;
    return first;
    }
    else
    {
        while(t->next!=NULL)
            t=t->next;

            t->next=temp;
            temp->prev=t;
            return first;
    }
}
void check(list first)
{
    list temp=first;
    int flag=1;
    while(temp->next!=NULL)
        temp=temp->next;

    while(first!=NULL&&temp!=NULL)
    {
    if(temp->no==first->no)
    {
        temp=temp->prev;
        first=first->next;
    }
    else
    {
        flag=0;
        break;
    }
    }

    if(flag==1)
        printf("PALINDROME\n");
    else
        printf("NOT PALINDROME\n");
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
