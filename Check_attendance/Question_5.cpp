#include <iostream>
using namespace std;

class Base {
    public: 
        virtual void print(){
            cout << "This is the base class" <<  endl;
        }
};

class Derive : public Base{
    public:
     void print() override{
        cout << "This is the derive class" << endl;
     }
};

int main(){
    Derive obj;
    obj.print();
    return 0;
}
