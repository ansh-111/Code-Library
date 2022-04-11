#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
public:
    rectangle(){length=1;breadth=1;}
    rectangle(int len,int bred){length=len;breadth=bred;}
    int get_len(){return length;}
    int get_bre(){return breadth;}
    void set_len(int len){length=len;}
    void set_bre(int bre){breadth=bre;}
    int area(){return length*breadth;}
    rectangle add(rectangle r)
    {
        rectangle temp;
        temp.length=length+r.length;
        temp.breadth=breadth+r.breadth;
        return temp;
    }
};
class cuboid:public rectangle
{
    int height;
public:
    cuboid(){height=1;}
    cuboid(int h){height=h;}
    void set_heigh(int h){height=h;}
    int get_heigh(){return height;}
    int vol(){return (get_len()*get_bre()*height);}
};
int main()
{
    rectangle r,r1,r2;
    r=r1.add(r2);
    cout<<r.get_len();
    cout<<r.get_bre();
    cuboid c(10);
    c.set_len(2);
    c.set_bre(2);
    //cout<<c.get_len()<<c.get_bre()<<
    cout<<c.vol()<<" "<<c.area();
}
