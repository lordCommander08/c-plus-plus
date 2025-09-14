#include<iostream>
using namespace std;
class planet{
public:
    char name[20];
    int distance;
    char color[20];
};
int main()
{
    planet earth;
    strcpy(earth.name,'dharti');
    earth.distance=1500;
    strcpy(earth.color,"green&blue");
    cout<<earth.name<<endl;
    cout<<earth.color;
}