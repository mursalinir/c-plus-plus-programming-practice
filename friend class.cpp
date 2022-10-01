#include<iostream>
using namespace std;

class A
{
private:
    int a;
public:
    A(){a=10;}
    friend class B;
};
class B
{
private:
    int b;
public:
    showA(A& x)
    {
        cout<<"A::a = "<<x.a;
    }
};
int main()
{
    A a;
    B b;
    b.showA(a);
}
