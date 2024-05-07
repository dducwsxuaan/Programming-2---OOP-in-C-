#include <iostream>
using namespace std;

class Bird {
    public:
        void eat(){
            cout << "Can eat" << endl;
        }
        virtual void type() = 0;
        virtual void name() = 0;
};

class FlyingBird : public Bird {
    public:
        void type(){
            cout << "Can fly" << endl;
        }
};

class SwimmingBird : public Bird {
    public:
        void type(){
            cout <<"Can swim" << endl;
        }
};

class Pigeon : public FlyingBird {
    public: 
        void name(){
            cout << "This is a pigeon" << endl;
        }
};

class Parrot : public FlyingBird {
    public:
        void name(){
            cout << "This is a parrot" << endl;
        }
};

class Duck : public SwimmingBird {
    public:
        void name(){
            cout << "This is a duck" << endl;
        }
};

class Penguin : public SwimmingBird {
    public:
        void name(){
            cout << "This is a penguin" << endl;
        }
};

int main(){
    Penguin penguin;
    penguin.eat();
    penguin.type();
    penguin.name();
    return 0;
}

