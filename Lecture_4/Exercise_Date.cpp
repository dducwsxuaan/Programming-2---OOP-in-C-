#include<iostream>
using namespace std;    
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year){
            
            if (day < 1 || day > 31){
                cout << "Invalid day\n";
                return;
            }
            if (month < 1 || month > 12){
                cout << "Invalid month\n";
                return;
            }
            if (year < 0){
                cout << "Invalid year\n";
                return;
            }
            this->day = day;
            this->month = month;
            this->year = year;
        
        }
        void add(Date &another){
            this->day = this->day + another.day;
            this->month = this->month + another.month;
            this->year = this->year + another.year;
        }
        void printDate(){
            cout << "Date : " << day << "/" << month << "/" << year << "\n";
        }

};

int main(){
    Date d1(2, 6, 2004);
    Date d2(5, 5, 0);
    d1.add(d2);
    d1.printDate();
    return 0;
}