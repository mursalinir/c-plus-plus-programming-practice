#include<iostream>
using namespace std;
void mur();
class shape
{
public:
    shape(int l, int w)
    {
        length = l;
        width = w;
    }
    getArea()
    {
        cout<<"This call from parent class."<<endl;
        return 1;
    }
    void mur()
    {
       cout<<"Hello Mur"<<endl;
    }
protected:
    int length;
    int width;
};

class square : public shape
{
public:
    square(int l, int w) : shape(l, w)
    {
    }
    int getArea()
    {
        cout<<"Square Area: "<<length*width<<endl;
        return length*width;
    }
};

class rectangle : public shape
{
public:
    rectangle(int l=0, int w=0) : shape(l,w)
    {
    }
    int getArea()
    {
        cout<<"Rectangle Area: "<<length*width<<endl;
        return length*width;
    }

    hello();
};

rectangle::hello()
{
    cout<<"Hello"<<endl;
}

int main()
{
    shape* s;
    shape ss(50,10);
    rectangle r(5,6);
    square sq(5,5);

    s = &r;
    int a = r.getArea();
    s->getArea();

    int mur = r.hello();
    //cout<<mur;
    ss.mur();
}
