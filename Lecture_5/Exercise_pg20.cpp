#include<iostream>
using namespace std;
class Person{
    private:
        string name;
        int yearOfBirth;
    public:
        Person(){
            this->name = "Peter";
            this->yearOfBirth = 2000;
        };

        Person(const Person &other){

        }

        Person(string name, int yearOfBirth){
            this->name = name;
            this->yearOfBirth = yearOfBirth;
        }

        bool checkName(const Person &other){
            bool result = false;
            if (this->name == other.name){
                result = true;
            }
            return result;
        }

        bool checkYear(const Person &other){
            bool result = false;
            if (this->yearOfBirth == other.yearOfBirth){
                result = true;
            }
            return result;
        }
        ~Person(){
            cout << "Destructor declared" << endl;
        };
};

int main(){
    Person person1;
    Person person2("Peter", 2004);
    Person person3("Maria", 2000);
    cout << person2.checkName(person1) << endl;
    cout << person2.checkYear(person3) << endl;
    cout << person1.checkName(person3) << endl;
    return 0;
}