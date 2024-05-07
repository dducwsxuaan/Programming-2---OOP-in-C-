// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class Bird {
public:
      virtual void eat()=0;  
};

class FlyingBird: public Bird{
public:
    virtual void fly()=0;
};

class SwimmingBird: public Bird{
public:
    virtual void swim()=0;
};

class Parrot: public FlyingBird {
public:
    void eat(){
        cout<<"Parrots eat corn."<<endl;
    }
    
    void fly(){
        cout<<"Parrots can fly in small range."<<endl;
    }
};

class Pigeon: public FlyingBird{
public:
    void eat(){
        cout<<"Pigeons eat cereal."<<endl;
    }
    
    void fly(){
        cout<<"Pigeons can fly in wide range."<<endl;
    }
};

class Duck: public SwimmingBird{
public:
    void eat(){
        cout<<"Ducks eat many things."<<endl;
    }
    
    void swim(){
        cout<<"Ducks can swim in small range."<<endl;
    }
};

template <class T> class SmartPtr {
    T* ptr; // Actual pointer
public:
    // Constructor
    explicit SmartPtr(T* p = NULL) { ptr = p; }
 
    // Destructor
    ~SmartPtr() { delete (ptr); }
 
    // Overloading dereferencing operator
    T& operator*() { return *ptr; }
 
    // Overloading arrow operator so that
    // members of T can be accessed
    // like a pointer (useful if T represents
    // a class or struct or union type)
    T* operator->() { return ptr; }
};
int main() {
    SmartPtr<Duck> duck (new Duck());
    SmartPtr<Parrot> parrot (new Parrot());
    parrot->eat();
    parrot->fly();
    
    
    return 0;
}