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
            cout << day << "-" << month << "-" << year <<endl;
        }
};

class Person {
    private:
        string name;
        // 1, 2) Date birth;
        // 3) Date* birth;
        Date &birth;
    public:
        // 1) Person (string name, int day, int month, int year) : name(name), birth(day, month, year) {};
        
        // 2) Person (string name, Date birth) : name(name), birth (birth){};
        // void describe(){
        //     cout << name << endl;
        //     birth.describe();
        // }

        // 3) Person (string name, Date* birth) : name(name), birth(birth) {}
        // void describe() {
        //     cout << name << endl;
        //     birth->describe();
        // }

        Person (string name, Date& birth) : name(name), birth(birth){};
        void describe() {
            cout << name <<endl;
            birth.describe();
        }
};

int main(){
    // 1) Person person1("Peter", 7, 6, 2004);
    // person1.describe();
    
    // 2) Date birth2 (7, 6, 2004);
    // Person person2("Peter", birth2);
    // person2.describe();

    // 3) Date *ptrBirth = new Date(7, 6, 2004);
    // Person person3("Peter", ptrBirth);
    // person3.describe();
    // delete ptrBirth;

    Date birth4(7, 6, 2004);
    Person person4 ("Peter", birth4);
    person4.describe();
    return 0;
}