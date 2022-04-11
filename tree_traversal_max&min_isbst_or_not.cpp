#include<iostream>
#include <queue>
#include<bits/stdc++.h>
using namespace std;
struct n
{
    int data;
    struct n *left,*right;
};
 typedef struct n *TREE;
int utlisbt(TREE node,int max,int min);
TREE getnode()
{
    TREE temp=(TREE)malloc(sizeof(TREE));
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
TREE add(TREE node,int num)
{
    if(node==NULL)
    {
        TREE temp=getnode();
        temp->data=num;
        return temp;
    }
    if(node->data>num)
        node->left=add(node->left,num);
    if(node->data<num)
        node->right=add(node->right,num);

    return node;
}
TREE max(TREE node)
{
    while(node->left!=NULL)
        node=node->left;
    return node;
}
TREE del(TREE node,int nu)
{
    if(node==NULL)
        return 0;
    else if(node->data>nu)
        node->left=del(node->left,nu);
    else if(node->data<nu)
        node->right=del(node->right,nu);
    else//number found
    {
        if(node->left==NULL)
        {
            TREE temp=node->right;
            free(node);
            return temp;
        }
       else if(node->right==NULL)
        {
            TREE temp=node->left;
            free(node);
            return temp;
        }
        else
        {
            TREE temp=max(node->left);
            node->data=temp->data;
            node->left=del(node->left,nu);
        }
    }
    return node;
}
void pred(TREE node)
{
    if(node==NULL)
        return ;
    cout<<node->data<<" ";
    pred(node->left);
    pred(node->right);
}
void ind(TREE node)
{
    if(node==NULL)
        return;
    ind(node->left);
    cout<<node->data<<" ";
    ind(node->right);

}
void postd(TREE node)
{
    if(node==NULL)
        return;
    postd(node->left);
    postd(node->right);
    cout<<node->data<<" ";
}
void leveltrav(TREE node)
{

    queue <TREE> q;
    q.push(node);
    while(!q.empty())
    {
        TREE temp=q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        q.pop();
    }
    cout<<"\n";
}
TREE search(TREE node,int x)
{
    if(node==NULL||node->data==x)
    {
        return node;
    }
    if(x<node->data)
        return search(node->left,x);
    if(x>node->data)
        return search(node->right,x);
}
int isbst(TREE node)
{
    return(utlisbt(node,INT_MAX,INT_MIN));
}
int utlisbt(TREE node,int max,int min)
{
    if(node==NULL)
        return 1;
    if(node->data<min||node->data>max)
        return 0;
    return
    utlisbt(node->left,node->data-1,min)&&utlisbt(node->right,max,node->data+1);
}
void maxmin(TREE node)
{
    int max,min;
    TREE temp=node;
    while(node->left!=NULL)
        node=node->left;
    min=node->data;
    while(temp->right!=NULL)
        temp=temp->right;
    max=temp->data;
    cout<<"\nMAX AND MIN ARE "<<max<<" "<<min<<"\n";
}
int main()
{
    int t,num,x,nu;
    TREE node=NULL;
    cout<<"ENTER CASES\n";
    cin>>t;
    while(t--)
    {
        cout<<"ENTER NUMBER\n";
        cin>>num;
        node=add(node,num);
    }
    pred(node);
    cout<<"\n";
    ind(node);
    cout<<"\n";
    postd(node);
    cout<<"\n";
    leveltrav(node);
    maxmin(node);
    cout<<"\nENTER NUMBER TO SEARCH\n";
    cin>>x;
    if(search(node,x)==NULL)
        printf("NOT FOUND\n");
    else
        printf("FOUND\n");
    if(isbst(node)==1)
        cout<<"BST\n";
    cout<<"ENTER NUMBER TO BE DELETED \n";
    cin>>nu;
    node=del(node,nu);
    postd(node);
    cout<<"\n";
}
