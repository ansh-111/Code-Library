#include <iostream>
using namespace std;
class A
{
public:
    int x=100;
    A()
    {
        cout<<"I AM A\n";
    }
};
class B:public A
{
public:
    B()
    {
        cout<<"I AM B\n";
    }
};
class C:public A
{
public:
    C()
    {cout<<"I AM C\n";}
};
class D:public C,public B
{
public:
    D()
    {
        cout<<"I AM D\n";
        C::x++;
        cout<<C::x;
    }
};
int main()
{
    class D d;
    return 0;
}
