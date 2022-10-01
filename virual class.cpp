#include<iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : virtual public  A
{
public:
    int b;
};

class C : virtual public  B, virtual public  A
{
public:
    int c;
};

int main()
{
    C ob;

    //ob.a :: A = 10;
    ob.B::a = 100;
    //poblem thaklo, not clear, amir shap re dekhabo.
    //ob.A::a = 10;
ob.a =10;
    //cout<<ob.B::a;
    cout<<ob.a;
}

