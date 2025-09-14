// // // #include<stdio.h>
// // // void print(int n){
// // //     for(n++;n++;n++){
// // //     printf("deependra");
// // //     printf("\n");}
// // // }
// // // int main(){
// // //     void print();
// // //     void print();
// // //     print(-9);
// // //     return 0;
// // // }
// // #include<stdio.h>
// // int main(){
// //     int c;
// //     ++c;
// //     printf("%d",c);
// //     return 0;
// // }
// #include<stdio.h>
// int main(){
//     static int i;
// static int g;
//     return 0;
// }


// // recurrsion
// #include<stdio.h>
// void f(int n){
//     if(n==0){
//         return ;
//     }
//     else{
//         f(n-1);
//         printf("%d",n);
//         f(n-1);
//         printf("%d",n);
//     }
// }
// void main(){
//     f(3);
// }
// #include<stdio.h>
// #include<stdlib.h>
// void f(int n){
//     if(n==0 || n==1){
//         printf("%d",n);
//         return ;
//     }
//     else{
//         f(n/2);
//         printf("%d",n%2);
//     }
// }
// int main(){
//     // int a;
//     // printf("enter a positive decimal number:");
//     // scanf("%d",&a);
//     f(10);
// }
// #include<stdio.h>
// #include<stdlib.h>
// int f(int n){
//     if(n<=9){
//         return 1 ;
//     }
//     else{
//        return 1+f(n/10);
//     }
// }
// int main(){
//     int a;
//     printf("enter a number:");
//     scanf("%d",&a);
//     int b=f(a);
//     printf("%d",b);
// }

// tower of hanoi//

// #include<stdio.h>
// void toh(int n,char source,char destination,char aux){
//     if(n==1){
//         printf("%c-->%c\n",source,destination);
//         return;
//     }
//     else{
//         toh(n-1,source,aux,destination);
//         printf("%c-->%c\n",source,destination);
//         toh(n-1,aux,destination,source);
//         return;
//     }
// }
// int main(){
//     int n;
//     printf("enter the number of disks:");
//     scanf("%d",&n);
//     toh(n,'A','C','B');
//     return 0;
// }

// fibonacci series // 
#include<stdio.h>
int fib(int n){
    if(n==1 || n==2)
    return 1;
    int b;
    b=fib(n-1)+fib(n-2);
    printf("%d",b);
}
int main(){
    int n;
    printf("enter the limit of the series:");
    scanf("%d",&n);
    fib(n);
    return 0;
}