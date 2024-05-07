#include <iostream>
#include <string>
using namespace std;

class Club {
    private:
        string name;
        string building;
        string phoneNumber;
    public:
        string getName(){
            return name;
        }
        void setName(string inputName){
            name = inputName;
        }

        string getBuilding();
        void setBuilding(string inputBuilding);

        string getPhoneNumber(){
            return phoneNumber;
        }
        void setPhoneNumber(string inputPhoneNumber){
            phoneNumber = inputPhoneNumber;
        }
};

string Club :: getBuilding(){
    return building;
}

void Club :: setBuilding(string inputBuilding){
    building = inputBuilding;
}