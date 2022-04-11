#include<iostream>
#include<cstdlib>
using namespace std;
struct oo
{
    int n;
    struct oo *next,*prev;
};
typedef struct oo *list;
list getnode()
{
    list temp=(list)malloc(sizeof(list));
    temp->next=NULL;
    temp->prev=NULL;
    cout<<"ENTER NUMBER TO BE INSERTED\n";
    cin>>temp->n;
    return temp;
}
list addf(list first)
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
list addr(list first)
{
    list t=getnode(),temp=first;
    if(first==NULL)
        first=t;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=t;
        t->prev=temp;
    }
    return first;
}
list delf(list first)
{
    list temp=first;
    if(temp==NULL)
        cout<<"LL EMPTY\n";
    else
    {
        first=temp->next;
        temp->next->prev=NULL;
        temp->next=NULL;
    }
    return first;
}
list delr(list first)
{
    list temp=first;
    if(temp==NULL)
        cout<<"LL EMPTY\n";
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;

        temp->prev->next=NULL;
    }
    return first;
}
void display(list first)
{
    if(first==NULL)
        cout<<"LL is EMPTY\n";
    else
    {
        while(first!=NULL)
        {
            cout<<first->n<<" ";
            first=first->next;
        }

    }
    cout<<"\n";
}
list addspf(list first,int i)
{
    list temp=first,t=getnode();
    while(first->next!=NULL&&i>1)
    {
        first=first->next;
        i--;
    }
    t->next=first->next;
    first->next->prev=t;
    first->next=t;
    t->prev=first;

    return temp;
}
list delspf(list first ,int pos)
{
    list temp=first;
    while(temp->next!=NULL&&pos>1)
    {
        temp=temp->next;
        pos--;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    return first;
}
void rdisplay(list first)
{
    while(first->next!=NULL)
        first=first->next;

    while(first->prev!=NULL)
    {
        cout<<first->n<<" ";
        first=first->prev;
    }
    cout<<first->n<<"\n";
}
int main()
{
    int t,pos;
    list first=NULL;
    while(1)
    {
        cout<<" ENTER THE OPERATION TO BE PERFORMED\n1. ADD FRONT\n2. ADD REAR\n3. DELETE FRONT\n4. DELETE REAR\n5. DISPLAY\n6. EXIT\n7.ADD AT SPECIFIC\n8.DELETE FROM SPECIFIC\n9.REVERSE DISPLAY\n";
        cin>>t;
        switch(t)
        {
            case 1:first=addf(first);
            break;
            case 2:first=addr(first);
            break;
            case 3:first=delf(first);
            break;
            case 4:first=delr(first);
            break;
            case 5:display(first);
            break;
            case 6:exit(0);
            break;
            case 7:cout<<"enter position number\n";
                    cin>>pos;
                    addspf(first,pos);
            break;
            case 8:cout<<"enter position number\n";
                    cin>>pos;
                    delspf(first,pos);
            break;
            case 9:rdisplay(first);
            break;

        }
    }
}
