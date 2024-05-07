#include <iostream>
using namespace std;

class Date {
    private: 
        int day;
        int month;
        int year;

    public:
        Date (int day, int month, int year) : day(day), month(month), year(year){};
        void describe(){
            cout << day << " - " << month << " - " << year <<endl;
        }
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
};

class Person{
    private:
        string name;
        Date dateOfBirth;

    public:
        Person (string name, Date dateOfBirth) : name(name), dateOfBirth(dateOfBirth){};
        void describe(){
            cout << name << " : ";
            dateOfBirth.describe();
        }

        bool checkSameName(const Person& other){
            return this->name == other.name;
        }
        bool checkSameBirthday(Person other){
            return (this->dateOfBirth.getDay() == other.dateOfBirth.getDay()) 
            && (this->dateOfBirth.getMonth() == other.dateOfBirth.getMonth()) 
            && (this->dateOfBirth.getYear() == other.dateOfBirth.getYear());
        }
        bool operator== (Person other){
            return this->checkSameName(other) && this->checkSameBirthday(other);
        }

};

int main(){
    Date date1(7, 6, 2004);
    Date date2(7, 6, 2004);
    Person person1("Peter", date1);
    Person person2("Jack", date2);
    Person person3("Jack", date2);
    person1.describe();
    // if (person1.checkSameName(person2)){
    //     cout << "Same name" << endl;
    // }
    // else{
    //     cout << "Differrent name" << endl;
    // }

    // if (person1.checkSameBirthday(person2)){
    //     cout << "Same birthday" << endl;
    // }
    // else{
    //     cout << "Differrent birthday" << endl;
    // }

    if (person3 == person2){
        cout << "Same person" <<endl;

    }
    else {
        cout << "Different person" << endl;
    }
    return 0;
}