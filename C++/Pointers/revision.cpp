#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"value of x after swapping:"<<*a<<endl;
    cout<<"value of y after swapping:"<<*b<<endl; 
}
int main()
{
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    int y;
    cout<<"enter the value of y:";
    cin>>y;
    swap(&x,&y);
}