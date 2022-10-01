#include<iostream>
using namespace std;

class A
{
private:
    int x, y;
public:
    A(int x1, int y1)
    {
        x=x1;
        y=y1;
    }
    /*A(const A &a)
    {
        x = a.x;
        y = a.y;
    }*/

    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};

int main()
{
    A a(10,15);
    A b = a;
    cout<<"a.x = "<<a.getx()<<"a.y = "<<a.gety()<<endl;
    cout<<"b.x = "<<b.getx()<<"b.y = "<<b.gety()<<endl;
}
