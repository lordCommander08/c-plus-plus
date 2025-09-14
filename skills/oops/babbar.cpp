#include<iostream>
using namespace std;
class hero{
private:
int health;
public:
char level;
int gethealth(){
    return health;
}
hero(){
    cout<<"constructor called"<<endl;
}
char getlevel(){
    return level;
}
void sethealth(int h){
    health = h;
}
void setlevel(char ch){
    level = ch;
}
};
int main()
{
    // hero raju;
    // raju.level='A+';
    // raju.sethealth(90);
    // cout<<"raju health is: "<<raju.gethealth()<<endl;
    // cout<<"raju level is: "<<raju.level<<endl;
    cout<<"hi"<<endl;
    hero raju;
    cout<<"ram ram"<<endl;
    return 0;
}