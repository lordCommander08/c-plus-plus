//  #include<iostream>
//  using namespace std;
//  int main(){
//     int x = 12;
//     cout<<&x;
//     int y=33;
      //  int* p=&y;
//     cout<<endl<<p;
//     cout<<" "<<&y;
//     return 0;
//     }
// #include<iostream>
// using namespace std;
// int main()
// {
//    int x=8;
//    int* p=&x;
//   cout<<p;
//   cout<<"\n"<<*p;
// } 
//sum of two numbers using pointers
// #include<iostream>
// using namespace std;
// int main(){
//    int x=1; 
//    int* a=&x;
//    int y=3;
//    int* b=&y;
//    cout<<*a+*b;
// }   
// swap using pointer
// #include<iostream>
// using namespace std;
// void swap(int* x,int* y){
//    int temp=*x;
//    *x=*y;
//    *y=temp;
//    return ;
// }
// int main()
// {
//    int a=99;
//    int b=88;
//    swap(&a,&b); 
//    cout<<a<<" "<<b;
// }
// addressing modes
// #include<iostream>
// using namespace std;
// int main()
// {
//    int x=9;
//    int* ptr=&x;
//    cout<<ptr<<endl;
//    ptr=ptr+1;
//    cout<<ptr<<endl;
//    return 0;  
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//    int a=4;
//    int *ptr=&a;
//    int b=++(*ptr);
//    cout<<a<<' '<<b;
// }
// first and last digit of a number
// #include<iostream>
// using namespace std;
// int getdigits(int a){
//    cout<<"last digit of a number: ";
//    cout<<a%10;
//    cout<<endl;
//    while(a>=10)
//    {
//     a=a/10;
//    }
//    cout<<"first digit: "<<a;
// }
// int main()
// {
//    int a;
//    cout<<"enter the number: ";
//    cin>>a;
//    getdigits(a);
//    return 0;
// }
// null pointer
#include<iostream>
using namespace std;
int main()
{
   int a=10;
   int* p=&a;
   cout<<p<<endl;
   cout<<*p<<endl;
}