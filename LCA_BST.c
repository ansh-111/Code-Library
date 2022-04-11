#include <iostram>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<vector>
#include <queue>
#include <utility>
#include <list>
#include <string>
#include<cstring>
#include<cmath>
#include<set>
#include <iterator>
#define ll long long int
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define pb push_back
#define M 1000000007
#define fin for(i=0;i<n;i++)
using namespace std;
class n
{
    int data;
    class n *left,*right;
};
typedef class n *tree;
tree add(tree node,int n)
{
    if(node==NULL)
    {
        tree temp=(tree)malloc(sizeof(tree));
        temp->data=n;
        temp->left=NULL;
        temp->right=NULL;
        node=temp;
        return node;
    }
    if(node->data>n)
         node->left=add(node->left,n);
    if(node->data<n)
        node->right=add(node->right,n);
        return node;
}
tree lca(tree node,int a,int b)
{
    while(node!=NULL)
    {
        if(node->data>a&&node->data>b)
            node=node->left;
        else if(node->data<a&&node->data<b)
            node=node->right;
        else
            break;
    }
    return node;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,no,a,b;
    tree node=NULL,temp=NULL;
    while(n--)
    {   cin>>no;
        node=add(node,no);
    }
    temp=lca(node,a,b);
    cout<<temp->data;
}

