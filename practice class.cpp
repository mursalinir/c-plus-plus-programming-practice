#include<iostream>
using namespace std;

class A
{
public:
    int a;
    ~A()
    {
        cout<<"object of class A has been destroyed!"<<endl;
    }
};

class B : public  A
{
public:
    int b;
};

class C : public  B, public  A
{
public:
    int c;
};

int main()
{
    C ob;
    //ob.a =10
    //ob.a :: A = 10;
    ob.B::a = 100;
    //poblem thaklo, not clear, amir shap re dekhabo.
    //ob.A::a = 10;
    cout<<ob.B::a;
}
