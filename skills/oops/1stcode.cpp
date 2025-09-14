// #include<iostream>
// #include<cstring>
// class gujjar{
// public:
//     int score; 
//     char name[10];
//     void showscore(){
//         cout<<"name is: "<<name<<"score is: "<<score;
//     }
// };
// using namespace std;
// int main()
// {
//     cout<<"DEEPENDRA DETAILS:"<<endl;
//     gujjar deependra;
//     strcpy(deependra.name,"chechi");
//     deependra.score = 100;
//     deependra.showscore();
//     // cout<<deependra.score<<endl;
//     // cout<<deependra.name;
//     cout<<endl;

//     gujjar darpan;
//     cout<<"Darpan details"<<endl;
//     darpan.score = 100;
//     strcpy(darpan.name,"Pawar");
//     darpan.showscore();
//     // cout<<darpan.score<<endl;
//     // cout<<darpan.name;
//     cout<<endl;

//     gujjar bhavna;
//     cout<<"bhavna DETAILS:"<<endl;
//     bhavna.score = 100;
//     strcpy(bhavna.name,"Khatana");
//     bhavna.showscore();
//     return 0;
// }

#include <iostream>
#include <string>

class Gujjar {
public:
    int score; 
    std::string name;

    Gujjar(const std::string& n = "", int s = 0) : name(n), score(s) {}

    void showScore() const {
        std::cout << "Name is: " << name << ", Score is: " << score << std::endl;
    }
};

int main() {
    using namespace std;

    cout << "DEEPENDRA DETAILS:" << endl;
    Gujjar deependra("Chechi", 100);
    deependra.showScore();

    cout << "Darpan DETAILS:" << endl;
    Gujjar darpan("Pawar", 100);
    darpan.showScore();

    cout << "Bhavna DETAILS:" << endl;
    Gujjar bhavna("Khatana", 100);
    bhavna.showScore();

    return 0;
}
