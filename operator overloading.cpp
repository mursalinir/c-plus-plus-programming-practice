#include<iostream>
using namespace std;

class A
{
public:
    int a;
    float b;

    A(int x, float y)
    {
        a = x;
        b = y;
    }

    A()
    {
    }

    /*A operator + (A obj)
    {
        A result;
        result.a = a + obj.a;
        result.b = b + obj.b;
        return result;
    }*/
};

A operator + (A obj, A obj2)
    {
        A result;
        result.a = obj.a + obj2.a;
        result.b = obj.b + obj2.b;
        return result;
    }

class B
{
public:
    int a;
    float b;

    B(int x, float y)
    {
        a = x;
        b = y;
    }

    B()
    {
    }

    /*B operator + (B const &obj1, B const &obj2)
    {
        B result;
        result.a = obj1.a + obj2.a;
        result.b = obj1.b + obj2.b;
        return result;
    }*/
};

int main()
{
    A o1(10, 15.5), o2(20, 25.5);
    A o3 = o1+o2;
    cout<<"integer value: "<<o3.a<<"\nfloat value: "<<o3.b<<endl;
    B o4(10, 15.5), o5(20, 25.5);
    //B o6 = o4+o5+o4;
    //cout<<"integer value: "<<o6.a<<"\nfloat value: "<<o6.b<<endl;
}
