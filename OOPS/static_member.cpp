#include<bits/stdc++.h>
using namespace std;

class customer{
public: 
    string name;
    long long acc_no;
    int age;
    int balance;
    static int total_balance;
    static int cust_no;

    customer(string s,long long a,int age,int bal){
        name = s;
        acc_no = a;
        this->age = age;
        balance = bal;
        total_balance += bal;
        cust_no++;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }
    }

    void withdrawal(int amount){
        if(amount > 0 && balance >= amount){ 
            balance -= amount;
            total_balance -= amount;
        }
    }

    static void access_static(){
        cout<<"cust-no: "<<cust_no<<endl;
    }

    static void display_total_balance(){
        cout<<"total balance: "<<total_balance<<endl;
    }

    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"acc_no: "<<acc_no<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};

int customer :: cust_no = 0;
int customer :: total_balance = 0;

int main(){
    customer c1("Deependra Gurjar",696048769077,20,10000);
    c1.display();
    c1.access_static();

    customer c2("Bhairvi chamar",465355748245,25,15000);
    c2.display();
    c2.access_static();

    customer :: display_total_balance();
    c1.deposit(5000);
    c1.display();

    c1.withdrawal(2000);
    c1.display();

    customer :: display_total_balance();

    return 0;
}