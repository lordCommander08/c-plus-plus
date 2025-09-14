#include<iostream>
using namespace std;
void game(int &a){
    cout<<a<<endl;
    a+=4;
    cout<<a<<endl;
    a+=5;
    cout<<a<<endl;
}
int main()
{
    int a=10;
    game(a);
    
    return 0;
}