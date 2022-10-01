#include<iostream>
using namespace std;

class base final
{
public:
    int a;

};

/* could not derived from the final base class*/
class derived : base
{

};

int main()
{
    return 0;

}
