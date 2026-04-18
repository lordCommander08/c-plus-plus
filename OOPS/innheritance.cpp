#include<bits/stdc++.h>
using namespace std;

class human{
public:
    string name;
    int age, weight;

private:
    string religion;
    string caste;
public:
    void set_data(string religion,string caste){
        this->religion=religion;
        this->caste=caste;
    }

    void get_data(){
        cout<<"Religion: "<<religion<<" "<<"caste: "<<caste<<endl;
    }
};

class student : public human{
public:
    int roll_no, fees;

    public:
    void setdata(string name, int age, int weight){
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    void getdata(){
        cout << name << " " << age << " " << weight << endl;
    }
    void display(){
        cout << name << " " << fees << endl;
    }
};

class

int main(){
    student a;
    a.setdata("Deependra Singh", 20, 70);
    a.getdata();

    a.set_data("Hindu","Gurjar");
    a.get_data();
    student s;
    s.setdata("Golu", 21, 65);
    s.fees = 50000;
    s.getdata();
    s.display();

    return 0;
}