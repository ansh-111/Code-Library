#include<iostream>
#include<list>
#include<bits/stdc++.h>
#include<iterator>
#include<queue>
#include<string>
#include<unordered_map>
#define pb push_back
#define mp make_pair
using namespace std;
template <typename t>
class graph
{
    unordered_map<t,list<pair<t,int> > > m;
public:
    void add(t k, t v,int w)
    {
        m[k].pb(mp(v,w));
        m[v].pb(mp(k,w));
    }
    void print()
    {
        for(auto i:m)
        {
            cout<<i.first<<" ";
            for(auto j:m[i.first])
            {
                cout<<j.first<<" "<<j.second<<" ";
            }
            cout<<"\n";
        }
    }
    void bfs(t n)
    {
        queue <t> q;
        q.push(n);
        map<t,int> flag;
        flag[n]=1;
        while(!q.empty())
        {
            t temp=q.front();
            cout<<temp<<" ";
            q.pop();
            for(auto i:m[temp])
            {
                if(flag[i.first]!=1)
                {
                    q.push(i.first);
                    flag[i.first]=1;
                }
            }
        }
        cout<<"\n";
    }
    void dfs_recr(t src,map<t,int> &flag)
    {
        cout<<src<<" ";
        flag[src]=true;
        for(auto i:m[src])
        {
            if(flag[i.first]!=1)
                dfs_recr(i.first,flag);
        }

    }
    void dfs(t src)
    {
        map <t,int> flag;
        for(auto i:m)
            flag[i.first]=0;
        dfs_recr(src,flag);
    }

};
int main()
{
    graph<int> g;
    int n,w,t;
    int k,v;
    cin>>t;
    while(t--)
    {
    cin>>n;
    while(n--)
    {
        cout<<"ENTER VALUE OF K V BI W";
        cin>>k>>v>>w;
        g.add(k,v,w);
    }
    g.print();
    //g.bfs(0);
    //g.dfs(0);
    }
}
