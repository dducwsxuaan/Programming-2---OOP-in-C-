#include <iostream>
#include <string>
using namespace std;

class Manufacturer {
    private:
        int id;
        string location;
    public:
        Manufacturer(int id, string location) : id(id), location(location){};
        void describe(){
            cout << id << " - " << location;
        }
};

class Device {
    private:
        string name;
        double price;
        Manufacturer manufacturer;
    public:
        Device(string name, double price, int id, string location) : name(name), price(price), manufacturer(id, location){};
        void describe(){
            cout << name << " - " << price << " - ";
            manufacturer.describe();
        }
};

int main(){
    Device device1("Iphone 12", 1200, 1, "USA");
    device1.describe();
    return 0;
}