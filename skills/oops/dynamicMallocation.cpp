#include <iostream>
#include <cstring> 
using namespace std;

class boy {
private:
    char name[20];
public:
    char* getname() {
        return name;
    }
    void setname(const char* name) {
        strcpy(this->name, name);
    }
};

int main() {
    boy lmbr;
    lmbr.setname("kartik Upadhyay");
    cout << "Boy name is: " << lmbr.getname() << endl;
    return 0;
}
