#include<iostream>
using namespace std;
int main()
{
    int costprice;
    cout<<"enter the costprice: ";
    cin>>costprice;
    int sellingprice;
    cout<<"enter the selling price: ";
    cin>>sellingprice;
    if(sellingprice>costprice)
    {
        int profit;
        cout<<"profit";
        profit=costprice-sellingprice;
        cout<<profit;
    }
    else{
        int loss;
        cout<<"loss";
        loss=sellingprice-costprice;
        cout<<loss;
    }

}