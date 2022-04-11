#include<iostream>
using namespace std;
int eea(int a,int m,int* x,int* y);
int mmi(int a,int m)
{
    int x,y,res;
    int gcd=eea(a,m,&x,&y);
    if(gcd!=1)
        cout<<"MMI DNE\n";
    else
    {
        res=((x%m)+m)%m;
    }
    return res;
}
int eea(int a,int m,int* x,int* y)
{
    if(a==0)
    {
        *x=0;*y=1;
        return m;
    }

        int x1,y1;
        int gcd=eea(m%a,a,&x1,&y1);
        *y=x1;
        *x=y1-(m/a)*x1;

    return gcd;
}
int main()
{
    int a,m;
    cin>>a>>m;
    int x= mmi(a,m);
    cout<<x;
}
