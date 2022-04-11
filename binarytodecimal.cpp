#include<iostream>
#define ll long long int
using namespace std;
/*ll btod(string s)
{
    ll n;
    n=stoi(s,0,2);
    return n;
}*/
ll btod(string n)
{

    ll num = stoi(n),dec_value=0,base=1;
    ll temp = num;
    while (temp) {
        temp = temp / 10;
        dec_value += (temp%10) * base;
        base = base * 2;
    }
    return dec_value;
}
int main()
{
    ll n;
    string s;
    cin>>s;
    n=btod(s);
    cout<<n;
}
