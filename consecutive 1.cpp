#include<iostream>
using namespace std;

int main()
{
    int a, counter=0, rem, c = 0;
    cout<<"Enter the binary input: "<<endl;
    cin>>a;
    while(a!=0)
    {
        rem=a%10;
        if(rem==1)
            counter++;
        else{
            if(c<counter)
                c=counter;
            counter = 0;
        }
        a=a/10;
    }
    if(counter>c)
        cout<<"consecutive 1 is:"<<counter<<endl;
    else
        cout<<"consecutive 1 is:"<<c<<endl;
}
