#include <iostream>
#include <string>
using namespace std;

class Course {
    private:
        int courseCode;
        string courseName;
    public:
        Course(int courseCode, string courseName) : courseCode(courseCode), courseName(courseName){}
        
        void describe(){
            cout << "Course code: " << courseCode << " - " << "Course name: " << courseName<< endl; 
        }
};

class Student {
    private:
        string name;
        int studentID;
        Course course;
    public:
        Student (string name, int studentID, int courseCode, string courseName) : name(name), studentID(studentID), course(courseCode, courseName){}
        void describe(){
            cout << "Student name: " << name <<" - "<<"Student ID: "<< studentID << endl;
            course.describe();
        }
};

int main(){
    Student student("David", 101, 111, "C++");
    student.describe();
    return 0;
}