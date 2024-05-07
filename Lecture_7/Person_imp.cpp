#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int yearOfBirth;
    public:
        Person (string name, int yearOfBirth){
            this->name = name;
            this->yearOfBirth = yearOfBirth;
        }

        void describe(){
            cout << "name: " << name << endl;
            cout <<"year of birth:" << yearOfBirth << endl;
        }
    ~Person(){
        cout << "Executing successfully\n";
    }
};

class Student : public Person{
    private:
        string grade;
    public:
        Student(string name, int yearOfBirth, string grade) : Person (name, yearOfBirth){
            this->grade = grade;
        }

        void describe() {
            Person::describe();
            cout << "grade: " << this->grade << endl;
        }
};

class Teacher : public Person{
    private:
        string subject;
    public:
        Teacher (string name, int yearOfBirth, string subject) : Person (name, yearOfBirth){
            this->subject = subject;
        }
        void describe(){
            Person::describe();
            cout << "subject: " << this->subject << endl;
        }
};

class Doctor : public Person{
    private:
        string specialist;
    public:
        Doctor (string name, int yearOfBirth, string specialist) : Person (name, yearOfBirth){
            this->specialist = specialist;
        }
        void describe(){
            Person::describe();
            cout << "specialist: " << this->specialist << endl;
        }
};

int main(){
    Student student ("John", 1990, "A");
    Teacher teacher ("Jane", 1980, "Math");
    Doctor doctor ("Jack", 1970, "Cardiology");
    student.describe();
    teacher.describe();
    doctor.describe();
}