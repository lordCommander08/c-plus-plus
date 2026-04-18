#include<bits.stdc++.h>
using namespace std;
class person{
    protected:
        string name;
    public:
        void introduce(){
            cout<<"My name is: "<<name<<endl;
        }
};

class employee : public person{
    protected:
        int salary;
    public:
        void monthly_salary(){
            cout<<"Monthly salary is: "<<salary<<endl;
        }
};

class manager: public employee{
    public:
    string department;
    int no_of_employees;
    public:
        manager(string name,int salary,string department,int no_of_employees){
            this->name=name;
            this->salary=salary;
            this->department=department;
            this->no_of_employees=no_of_employees;
        }
        void detail(){
            cout<<"Department: "<<department<<endl;
            cout<<"no_of_employees: "<<no_of_employees<<endl;
        }
};

int main(){
    manager a("Deependra Chechi",120000,"Finance",112);
    a.introduce();
    // a.name="Deependra Chechi";
    // a.salary=120000;
    // a.deparment="finance";
    // a.no_of_employees=112;
    // a.introduce();
    // a.monthly_salary();
    // a.detail();
    return 0;
}