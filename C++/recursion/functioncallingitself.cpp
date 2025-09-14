#include<iostream>
using namespace std;
void greet()
{
    cout<<"hi!"<<endl;
    greet();
}
int main()
{
    greet();
}