#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    string name;
    int age;
    long long mobile;
    string grades;
    static int count;
    int student_Number;
    public:

    // set method is used to set the values for the values define under the private //
    void setdata(string n,int a,long long m,string g){
        name=n;
        age=a;
        mobile=m;
        grades=g;
        count++;
        student_Number=count;
    }

    // get method is used to print the data when its define as PRIVATE //
    void getdata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Mobile: "<<mobile<<endl;
        cout<<"Grades: "<<grades<<endl;
        cout<<"------------------------"<<endl;
    }

    // default constructor called automatically whenever we call the class //
    student(){
        cout<<"Default Constructor Called"<<endl;
    }
    // parameterised constructor //
    // when we have same paramter's name as define inside the class then we use this-> method //
    // if you want to print default value (the value which u did't passed) the u have to write that parameter at the end //
    student(string name,long long mobile,string grades,int age=20){
        this->name=name;
        this->age=age;
        this->mobile=mobile;
        this->grades=grades;
    }

    // inline constructor //
    // inline customer(string s,long long m,string g,int a): name(s), mobile(m), grades(g), age(a) {};

    // copy Constructor //
    student(student &s){
        name=s.name;
        age=s.age;
        mobile=s.mobile;
        grades=s.grades;
    }
    ~student(){
        cout<<"desturctor is called\n";
    }
};
int student::count=0;
int main(){
student s1;
s1.setdata("satyarth",19,1234567890,"A+");
s1.getdata();
cout<<"Size Of Object S1: "<<sizeof(s1)<<endl;
student *s2 = new student;
s2->setdata("Deependra",20,9720209888,"A");
s2->getdata();
cout<<"Size Of Object S2: "<<sizeof(*s2)<<endl;
delete s2;
student s3("Shivam",8218275713,"A+");
s3.getdata();
student s4(s3);
cout<<"Copy Constructor"<<endl;
s4.getdata();
}