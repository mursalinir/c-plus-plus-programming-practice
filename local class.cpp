#include<bits/stdc++.h>
using namespace std;

int fun(int s)
{
    class A
    {
    public:
        int a;
        A()
        {}
        A(int a)
        {
            this->a = a;
        }
        static void test()
        {
            cout<<"from class definition";
        }
    };

    A ob;
    ob.a = 50;
    A ob2(s);
    return ob2.a;
}

int main()
{
    //A ob3;
    //ob3.a = 10;
    cout<<fun(20);
}
