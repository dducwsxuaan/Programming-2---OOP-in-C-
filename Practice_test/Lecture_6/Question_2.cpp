#include <iostream>
#include <string>
using namespace std;

class Beverage{
    private:
        float price;
        float topping_price;
        float condiment_price;

    public:
        Beverage(){
            this->price = 0;
            this->condiment_price = 0;
            this->topping_price = 0;
        }

        Beverage(float price, float topping_price, float condiment_price){
            this->price = price;
            this->topping_price = topping_price;
            this->condiment_price = condiment_price;
        }

        Beverage(const Beverage &obj){
            this->price = obj.price;
            this->condiment_price = obj.condiment_price;
            this->topping_price = obj.topping_price;
        }

        Beverage operator+ (const Beverage other){
            Beverage result;

            result.price = this->price + other.price;
            result.topping_price = this->topping_price + other.topping_price;
            result.condiment_price = this->condiment_price + other.condiment_price;
            
            return result;
        }

        bool operator==(Beverage const other){
            return (this->price == other.price) && (this->condiment_price == other.condiment_price) && (this->topping_price == other.topping_price);
        }

        void describe(){
            cout << "price: " << this->price << " " <<"topping_price: " << this->topping_price << " " << "condiment_price: " << this->condiment_price <<endl;
        }
};

int main(){
    Beverage b0;
    b0.describe();

    Beverage b1(10.5, 2.3, 1.2);
    b1.describe();

    Beverage b2(15, 2.2, 0.5);
    b2.describe();

    Beverage b3(b1);
    b3.describe();

    b3 = b1 + b2;
    b3.describe();

    cout << "Is b3 = b1? " << ((b1 == b3)? "True" : "False") << endl;

    b3 = b1;
    b3.describe();
    cout << "Is b3 = b1? " << ((b1 == b3)? "True" : "False") << endl;

    return 0;
}