#include<iostream>
using namespace std;

class A
{
};
class B
{
public:
    int a;
    float b;
    float c;
    float m;
    float n;
    int *p;
};

class C : public A
{
public:
    int d;
};

int main()
{
    A ob;
    B ob1;
    C ob2;

    cout<<sizeof(ob1);
}
