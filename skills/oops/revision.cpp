// #include<iostream>
// #include<cstring>
// using namespace std;
// class student{
// private:
//     double salary;
// public:
//     student(){
//         cout<<"COMPUTER SCIENCE DEPARTMENT\n";
//     }
//     char name[10];
//     char section[5];
//     float lastyearMarks;
//     char currentsession[5];
//     void setsalary(double s){
//         salary=s;
//     }
//     double getsalary(){
//         return salary;
//     }
// };
// int main()
// {
//     student deependra;
//     // strcpy(deependra.name,"Deependra Chechi");
//     // cout<<"NAME:"<<deependra.name;
//     // strcpy(deependra.section,"CSE-2B");
//     // cout<<endl<<"section:"<<deependra.section;
//     // deependra.lastyearMarks=8.91;
//     // cout<<endl<<"LastyearMarks:"<<deependra.lastyearMarks;
//     // strcpy(deependra.currentsession,"2024-25");
//     // cout<<endl<<"current-session:"<<deependra.currentsession;
//     // deependra.setsalary(250000);
//     // cout<<endl<<"salary:"<<deependra.getsalary();

//     // cout<<"\n"<<"NEW STUDENT";
//     // cout<<endl;
//     student darpan;
//     // strcpy(darpan.name,"Darpan Pawar");
//     // cout<<"NAME:"<<darpan.name;
//     // strcpy(darpan.section,"CSE-2B");
//     // cout<<"\n"<<"section:"<<darpan.section;
//     return 0;
// }

// PLAYING WITH CONSTRUCTOR  //

#include<iostream>
using namespace std;
class student{
public:
    student(string n,string d,string s){
        name = n;
        dept = d;
        subject = s;
    }
    string name;
    string dept;
    string subject;
    void getinfo(){
        cout<<"NAME:"<<name<<endl;
        cout<<"DEPARTMENT:"<<dept<<endl;
        cout<<"SUBJECT:"<<subject;
    }
};
class teacher{
public:
    teacher(string n,string d,string s){
        this->name=n;
        department=d;
        salary=s;
    }
    string name;
    string department;
    string salary;
    void getdetail(){
        cout<<"NAME:"<<name<<endl;
        cout<<"DEPARTMENT:"<<department<<endl;
        cout<<"SALARY:"<<salary;
    }
    ~teacher(){
        cout<<endl<<"im destructor!";
    }
};
int main()
{
    student s1("Deependra Singh","CSE","PYTHON");
    s1.getinfo();
    cout<<endl;
    student s2("Shivam Chechi","ECE","COA");
    s2.getinfo(); 
    cout<<endl;
    teacher t1("Naveen Baisoya","Data Structure","1.5lakh");
    // t1.getdetail();
    teacher t2(t1);  
    t2.getdetail();
    cout<<endl;  
    teacher t3(t2);
    t3.getdetail();
    return 0;
}
