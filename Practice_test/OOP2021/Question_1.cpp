#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        int employeeId;
        string employeeName;
        string gender;
        int departmentId;
    public:
        Employee (int employeeId, string employeeName, string gender, int departmentId) : employeeId(employeeId), employeeName(employeeName), gender(gender), departmentId(departmentId){};
        int getEmployeeId(){
            return employeeId;
        }
        string getEmployeeName(){
            return employeeName;
        }
        string getGender(){
            return gender;
        }
        int getDepartmentId(){
            return departmentId;
        }
        void describe(){
            cout << "Employee Id: " << employeeId << "\t";
            cout << "Employee name: " << employeeName << "\t";
            cout << "Gender: " << gender << "\t";
            cout << "Department ID: " << departmentId << endl;
        }
};

class Manager : public Employee{
    public:
        Manager (int employeeId, string employeeName, string gender, int departmentId) : Employee(employeeId, employeeName, gender, departmentId){};
};

int main(){
    Employee employee(10522080, "Jack", "Male", 104);
    Manager manager(10422085, "Xuan", "Male", 104);
    employee.describe();
    manager.describe();
    return 0;
}