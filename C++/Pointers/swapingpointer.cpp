#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b  = temp;
}
 int main()
    {
        int x;
        cout<<"enter the value of x:";
        cin>>x;
        int y;
        cout<<"enter the value of y:";
        cin>>y;
        cout<<x<<" "<<y<<endl;
        swap(&x,&y);
        cout<<x<<" "<<y<<endl;
    }