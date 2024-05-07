#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound() = 0;
};

class Dog : public Animal {
    public:
        void sound(){
            cout << "gau gau" << endl;
        }
};

class Cat : public Animal {
    public:
        void sound(){
            cout << "meo meo meo meo tra lai tam tri toi day" << endl;
        }
};

class Lion : public Animal {
    public:
        void sound(){
            cout << "simbaaaaaaaaaaaaaa" << endl;
        }
};

int main(){
    Dog dog1;
    Cat cat1;
    Lion lion1;

    dog1.sound();
    cat1.sound();
    lion1.sound();
}