#include<iostream>
#include<queue>
using namespace std;
struct n
{
    int data;
    struct n *left,*right;
};
typedef struct n *tree;
tree getnode()
{
    tree temp=(tree)malloc(sizeof(tree));
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
tree add(tree node,int num)
{
    if(node==NULL)
    {
        tree temp=getnode();
        temp->data=num;
        return temp;
    }
    else if(node->data>num)
        node->left=add(node->left,num);
    else
        node->right=add(node->right,num);
    return node;
}
void inorder(tree node)
{
    if(node==NULL)
        return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void leveltrav(tree node)
{
    queue <tree> q;
    if(node==NULL)
        return;
    q.push(node);

    while(!q.empty())
    {
        tree temp=q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        q.pop();
    }
}
void balanced(tree node)
{
    int t=1;
    while(node!=NULL)
    {
        if(node->left!=NULL&&node->right!=NULL)
            t=0;
        node=node->left;
    }
}
int main()
{
    int t,num;
    cin>>t;
    tree node=NULL;
    while(t--)
    {
        cout<<"ENTER NUMBERS\n";
        cin>>num;
        node=add(node,num);
    }
    inorder(node);
    cout<<"\n";
    leveltrav(node);
    balanced(node);
}
