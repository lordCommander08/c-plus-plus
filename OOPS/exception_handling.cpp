 #include<bits/stdc++.h>
 using namespace std;
 class bank{
    public:
        string name;
        int balance;
        int acc_no;
    bank(string name,int balance,int acc_no){
        this->name=name;
        this->balance=balance;
        this->acc_no=acc_no;
    }

    
void deposit(int amount){
    if(amount>0){
        balance+=amount;
        cout<<amount<<" rs added successfully"<<endl;
    }
    else{
        throw "amount should be greater than zero";
    }

}
void withdraw(int amount){
    if(amount>0){
        if(balance>=amount){
            balance-=amount;
            cout<<amount<<" rs withdrawn successfully"<<endl;
        }
        else{
            throw "insufficient balance";
        }
    }
    else{
        throw "amount should be greater than zero";
    }
}

void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Account number: "<<acc_no<<endl;
    }
 };

int main(){
    bank b("Deependra",10000,123456);
    try{
        b.deposit(5000);
        b.withdraw(20000);
    }
    catch(const char *e){
        cout<<"exception occured: "<<e<<endl;
    }
    b.display();
}