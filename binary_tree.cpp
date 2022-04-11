#include<iostream>
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
tree insert(tree node,int n)
{
     if(node==NULL)
    {
        tree temp=getnode();
        temp->data=n;
        return temp;
    }

    else if(node->data>=n)
            node->left=insert(node->left,n);
    else
            node->right=insert(node->right,n);
    return node;
}
void display(tree node)
{
    if(node==NULL)
        return;
    display(node->left);
    cout << node->data << " ";
	display(node->right);

}
void search(tree node,int x)
{
    if(node->data==x)
    {
    cout<<"Found\n";
    return;
    }
    if(x>node->data)
        search(node->right,x);
    else
        search(node->left,x);
}
int main()
{
    int n,t,num,x;
    tree node=NULL,f=NULL;
    cout<<"ENTER CASES\n";
    cin>>n;
    while(n--)
    {
        cout<<"ENTER NUMBERS TO BE ENTERD\n";
        cin>>num;
        node=insert(node,num);
    }
    cout<<"Enter number to search";
    cin>>x;
    search(node,x);
    display(node);
}
