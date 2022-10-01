#include<iostream>
using namespace std;

int fun(int a)
{
    static int x=0;
    //x=0;
    x=x+a;
    return x;
}

int main()
{
    //int a=10;
    cout<<"First call: "<<fun(10)<<endl;
    cout<<"Second call: "<<fun(10)<<endl;
    return 0;
}
