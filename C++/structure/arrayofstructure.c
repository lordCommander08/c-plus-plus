#include<stdio.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char name[15];
} pokemon;
int main()
{
    pokemon arr[2];
    arr[0].attack = 50;
    arr[0].speed =100;
    arr[0].hp=99;
    strcpy(arr[0].name,"pikachuu");

     arr[1].attack = 77;
    arr[1].speed =88;
    arr[1].hp=99;
    strcpy(arr[1].name,"mew too");

    for(int i=0;i<2;i++)
    {
       printf("attack: %d\n",arr[i].attack);
       printf("speed: %d\n",arr[i].speed);
       printf("hp: %d\n",arr[i].hp);
       printf("name: %s\n",arr[i].name);
       printf("\n");
    }
    return 0;
}