#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        int employeeId;
        string employeeName;
        string gender;

    public:
        Employee(int inputEmployeeId, string inputEmployeeName, string inputGender){
            employeeId = inputEmployeeId;
            employeeName = inputEmployeeName;
            gender = inputGender;
            cout << "an object is created." << endl;

        }
        int getEmployeeId(){
            return employeeId;
        }
        void setEmployeeId(int inputEmployeeId){
            employeeId = inputEmployeeId;
        }

        string getEmployeeName(){
            return employeeName;
        }
        void setEmployeeName(string inputEmployeeName){
            employeeName = inputEmployeeName;
        }   

        string getGender();
        void setGender(string inputGender);
};

string Employee :: getGender(){
    return gender;
}

void Employee :: setGender(string inputGender){
    gender = inputGender;
}

int main(){
    Employee employeeVGU(10422085, "Duc Xuan", "Male");
    // employeeVGU.setEmployeeId(10422085);
    // employeeVGU.setEmployeeName("Duc Xuan");
    // employeeVGU.setGender("Male");

    // cout << "The Id of the employee is: " << employeeVGU.getEmployeeId() << endl;
    // cout << "The Name of the employee is: " << employeeVGU.getEmployeeName() << endl;
    // cout << "The gender of the employee is: " << employeeVGU.getGender() << endl;
    
    return 0;

;}