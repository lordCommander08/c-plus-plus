#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the month number: ";
    cin>>x;
    switch((x<=7 && x%2!=0) || (x>=8 || x%2==0)){
        case 1:
        cout<<"31";
 }
 switch (x==4 || x==6 || x==9 || x==11)
 {
    case 1:
    cout<<"30";
     }
     switch(x){
        case 2:
        cout<<"28";
     }
    return 0;
}