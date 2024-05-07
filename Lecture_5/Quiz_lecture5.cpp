#include <iostream>
#include <string>
using namespace std;

class Employee{

    
    private:
        int employeeId;
        string employeeName;
        int employeeAge;
    

    public:
        Employee(int employeeId){
            this->employeeId = employeeId;
        }

        Employee(int employeeId, string employeeName, int employeeAge){
            this->employeeId = employeeId;
            this->employeeName = employeeName;
            this->employeeAge = employeeAge;
        }
        int getEmployeeId(){
            return employeeId;
        }

        void setEmployeeId(int inputId){
            employeeId = inputId;
        }

        string getEmployeeName(){
            return employeeName;
        }

        void setEmployeeName(string inputName){
            employeeName = inputName;
        }

        int getEmployeeAge(){
            return employeeAge;
        }

        void setEmployeeAge(int inputAge){
            employeeAge = inputAge;
        }

        ~Employee(){
            cout<<"The program is ended.\n";
        }
};

int main(){
    Employee employee_1(10422085);
    Employee employee_2(10422085, "Xuan", 20);
    // employee_1.setEmployeeId(10422085);
    // employee_1.setEmployeeName("Xuan");
    // employee_1.setEmployeeAge(20);
    cout<<employee_1.getEmployeeId()<<endl;
    cout<<employee_2.getEmployeeId()<<" "<<employee_2.getEmployeeName()<<" "<<employee_2.getEmployeeAge()<<endl;


}
