#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
        int legs;
};
class Cat : public Animal{
    private:
        string name;
        string color;
        int age;
    public:
        string getName(){
            return name;
        }
        void setName(string inputName){
            name = inputName;
        }

        string getColor();
        void setColor(string inputColor);

        int getAge(){
            return age;
        }
        void setAge(int inputAge){
            age = inputAge;
        }

        int getLegs(){
            return legs;
        }
        void setLegs(int inputLegs){
            legs = inputLegs;
        }
};

string Cat::getColor(){
    return color;
}

void Cat::setColor(string inputColor){
    color = inputColor;
}

int main(){
    Cat aPussieCat;
    aPussieCat.setName("Martini");
    aPussieCat.setAge(12);
    aPussieCat.setColor("blonde");
    aPussieCat.setLegs(4);
    cout<<"The name of the cat: "<<aPussieCat.getName()<<endl;
    cout<<"The age of the cat: "<<aPussieCat.getAge()<<endl;
    cout<<"The color of the cat: "<<aPussieCat.getColor()<<endl;
    cout<<"The number of legs of the cat: " << aPussieCat.getLegs() << endl;
    return 0;
}


