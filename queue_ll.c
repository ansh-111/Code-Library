#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *q;
q get();
q enq(q);
q deq(q);
void display(q);
int main()
{
    int n,t;
    q first=NULL;
    printf("ENTER SIZE OF QUEUE\n");
        scanf("%d",&t);
    while(1)
    {
        printf("1.ENQUEUE 2. DEQUEUE 3. DISPLAY 4. EXIT\n");
        scanf("%d",&n);
        switch(n)
        {
           case 1:
                if(t>0)
                {first=enq(first);
                t--;}
                else
                {
                    while(first->next!=NULL)
                        first=first->next;
                    printf("REAR ELEMENT IS %d",first)
                    printf("QUEUE OVERFLOW\n");
            break;
            case 2: first=deq(first);
            break;
            case 3:display(first);
            break;
            case 4:exit(0);
            break;
        }
    }
}
q get()
{
    q temp=malloc(sizeof(*temp));
    temp->next=NULL;
    printf("ENTER DATA TO ENQUEUE\n");
    scanf("%d",&temp->data);
    return temp;
}
q enq(q first)
{
    q temp=get();
    q t=first;
    if(first==NULL)
    {
        printf("FRONT OF QUEUE %d\n",temp->data);
        first=temp;
    }
    else
    {
        while(t->next!=NULL)
            t=t->next;
            t->next=temp;
    }
    return first;
}
q deq(q first)
{
    q t=first;
    if(first==NULL)
        printf("QUEUE EMPTY\n");
    else
    {
        printf("%d\n",t->data);
    first=first->next;
    free(t);
    return first;
    }
}
void display(q first)
{
    if(first==NULL)
        printf("QUEUE EMPTY\n");
    else
    {
    while(first!=NULL)
    {
        printf("%d\t",first->data);
        first=first->next;
    }
    }
    printf("\n");
}
