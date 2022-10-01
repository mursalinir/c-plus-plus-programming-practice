#include<iostream>
using namespace std;

void fun1();
void fun2();

#pragma startup fun1
#pragma exit fun2

void fun1()
{
    cout<<"bro I'm  here! in function 1";
}

void fun2()
{
    cout<<"bro now I'm in function 2 la la la";
}
int main()
{
    fun1();
    fun2();
    cout<<"main function a chole ashci :D";
    return 0;
}
