#include <iostream>
using namespace std;

class Class1 {
    public:
        void function1() {
            cout << "function 1" << endl;
        }
};

class Class2 : public Class1{
    public:
        void function2() {
            cout << "function 2" << endl;
        }
};

class Class3 : public Class2{
    public:
        void function3(){
            cout << "function 3" <<endl;
        }
};
int main(){
    Class3 class3;
    class3.function1();
    class3.function2();
    class3.function3();
    return 0;
}

