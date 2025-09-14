#include<iostream>
#include<cstring>
class book{
public:
    char name [20];
    int price;
    int pages;
    int countbooks(int p){
        if(price<p)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    bool isbookpresent(char book)
    {
        if(name == book)
        {
            return true;
        }
    else
    {
        return false;
    }
    }
};
using namespace std;
int main()
{
    book thunder;
    strcpy(thunder.name,"fire fighter");
    thunder.price = 1200;
    thunder.pages =600;
    // cout<<thunder.name<<endl<<thunder.price<<endl<<thunder.pages;
    cout<<thunder.countbooks(1300);
    return 0;
}