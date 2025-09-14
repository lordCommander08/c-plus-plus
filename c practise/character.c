#include<stdio.h>
int main()
{
    printf("%d",12&&13.55);
    printf("\n");
    printf("%d",0&&5);
    printf("\n");
    printf("%d",12 || -1);
    printf("\n");
    int a=5;
    printf("%d\n",a++);
    printf("%d",++a);
    return 0;
}