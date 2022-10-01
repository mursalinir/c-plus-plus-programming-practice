#include <iostream>
#include <stdio.h>
int a=20;
using namespace std;
int& f()
{
    static int x;
    return x;
}
class Book{
    private:
        int price;

    public:
        string author;
        string title;
        int page;

        Book(){}

        Book(string author, string title, int page, int price)
        {
            this->author = author;
            this->title = title;
            this->page = page;
            setPrice(price);
        }
        void setPrice(int price)
        {
            if(price>0)
                this->price = price;
            else
                this->price = 0;
        }
        int getPrice()
        {
            return this->price;
        }
        int getExample()
        {
            return this->example;
        }
        void setExample(int example)
        {
            this->example = example;
        }

    protected:
        int example;
};
class mathBook : public Book
{

    public:
        int chapter;
        void setprice(int p)
        {
            example = p;
            cout<<example;
        }


};
int main()
{
    int a=10;
    Book book1("Mursalin Islam", "Love is power", 500, 420), book2;
    mathBook book3;
    book3.title = "General Math";
    book3.setPrice(120);
    book3.setExample(100);
    f()=10;
    //book1.author = "Mursalin Islam";
    //cout<<f();
    book2.author = "Islam";
    cout<<book1.title<<endl;
    cout<<book2.author<<endl;
    cout<<book1.getPrice()<<endl;
    cout<<book3.getPrice()<<endl;
    cout<<book3.title<<endl;
    cout<<book3.getExample()<<endl;
    //cout<<::a;


    return 0;
}
