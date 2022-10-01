#include<iostream>
using namespace std;
class A;
class B
{
private:
    int b = 20;
public:
    void showB(B& x)
    {
        cout<<"B::b = "<<x.b;
    }
};
class A
{
private:
    int a;
public:
    A(){a=10;}
    friend void B::showB(B&);
};

int main()
{
    A a;
    B b;
    a.showB(a);
}
