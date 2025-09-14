#include<iostream>
using namespace std;
class player{
private:
    int health;
    int age;
    int score;
    bool alive;
    int centuries;
public: 
// GETTER
   int gethealth(){
    return health;
   }
   int getage(){
    return age;
   }
   int getscore(){
    return score;
   }
   bool isalive(){
    return alive;
   }
   int getcenturies(){
    return centuries;
   }
//    SETTER
   void setcenturies(int centuries){
    this->centuries = centuries;
   }
   void sethealth(int health){
    this->health = health;
   }
   void setage(int age){
    this->age = age;
   }
   void setscore(int score){
    this->score =  score;
   }
   void setisalive(bool alive){
    this->alive = alive;
   }
};
int addage(player a,player b){
    return a.getage()+b.getage();
}
int main()
{
    player *dsg= new player;
    player dsgobject = *dsg;
    dsgobject.setscore(69);
    cout<<"dsg score is = "<<dsgobject.getscore()<<endl;
    player gill;

    gill.setscore(99);
    gill.setage(21);
    gill.setisalive(true);
    gill.sethealth(87);
    gill.setcenturies(5);


    cout<<"gill score is: "<<gill.getscore()<<endl;
    cout<<"gill age is: "<<gill.getage()<<endl;
    cout<<"gill is alive: "<<(gill.isalive() ? "Yes" : "No")<<endl;
    cout<<"gill health is: "<<gill.gethealth()<<endl;
    cout<<"no of centuries by gill: "<<gill.getcenturies()<<endl;


    player shivam;
    cout<<"SHIVAM GURJAR DETAILS ARE GIVEN BELOW:"<<endl;
    shivam.setscore(150);
    shivam.setage(19);
    shivam.setisalive(false);
    shivam.sethealth(87);
    shivam.setcenturies(101);


    cout<<"shivam score is: "<<shivam.getscore()<<endl;
    cout<<"shivam age is: "<<shivam.getage()<<endl;
    cout<<"shivam is alive: "<<(shivam.isalive() ? "Yes" : "No")<<endl;
    cout<<"shivam health is: "<<shivam.gethealth()<<endl;
    cout<<"no of centuries by shivam: "<<shivam.getcenturies()<<endl;
    cout<<"sum of their ages:"<<addage(gill,shivam)<<endl;
    // cout<<sizeof(shivam)<<endl<<sizeof(gill);
    // using memory allocation
    player *kl=new player;
    player klboject=*kl;
    
    // klboject.setage(33);
    // klboject.setcenturies(18);
    // klboject.sethealth(70);
    // strcpy(klobject.setname(),"RAHUL");
    
    // cout<<klobject.getage()<<endl;
    // cout<<klobject.getcenturies()<<endl;
    // cout<<klobject.gethealth()<<endl;
    // cout<<klobject.getname();
} 