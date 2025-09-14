#include<iostream>
using namespace std;

struct person {
    char name[50];
    int salary;
    int age;
};

int main() {
    struct person one;
    one.name= "Deependra singh"; // Use strcpy to copy string
    one.salary = 150000;
    one.age = 18;

    struct person two;
    two.name ="Omkar"; // Use strcpy to copy string
    two.salary = 234390;
    two.age = 20;

    cout << one.name << endl; // Print one.name
    return 0; // Return 0 to indicate successful execution
}
