#include <stdio.h>

typedef struct cricket {
    char name[20];
    int age;
    int testmatch;
    int averagerun;
} cricket;

int main() {
    cricket arr[2];

    // Input loop
    for (int i = 0; i < 2; i++) {
        printf("Enter name: ");
        scanf("%s", arr[i].name);
        printf("Enter age: ");
        scanf("%d", &arr[i].age);
        printf("Enter number of test matches played: ");
        scanf("%d", &arr[i].testmatch);
        printf("Enter average run: ");
        scanf("%d", &arr[i].averagerun);
    }

    // Output loop
    for (int i = 0; i < 2; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Number of test matches played: %d\n", arr[i].testmatch);
        printf("Average run: %d\n", arr[i].averagerun);
    }

    return 0;
}
