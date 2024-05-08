#include <iostream>
#include <string>
using namespace std;

class Product{
    private:
        float price;
        float weight;
        float discount;
    public:
        Product() : price(0), weight(0), discount(0){};
        Product(float price, float weight, float discount) : price(price), weight(weight), discount(discount){}
        Product(const Product &other){
            this->price = other.price;
            this->weight = other.weight;
            this->discount = other.discount;
        }
        void describe(){
            cout << "price: " << price << "  " << "weight: " << weight << "  " << "discount: " << discount << endl;
        }
        Product operator+(const Product &other){
            Product result(this->price+other.price, this->weight+other.weight, this->discount+other.discount);
            return result;
        }
        void operator=(const Product &other){
            this->price = other.price;
            this->weight = other.weight;
            this->discount = other.discount;
        }
        bool operator==(const Product &other){
            return (this->price == other.price) && (this->weight == other.weight) && (this->discount == other.discount);
        }
};

int main(){
    Product m0;
    m0.describe();

    Product m1(10.5, 2.3, 1.2);
    m1.describe();

    Product m2(15, 2.2, 0.5);
    m2.describe();

    Product m3(m1);
    m3.describe();

    m3 = m1 + m2;
    m3.describe();

    cout << "Is m3 = m1? " << ( m3 == m1 ) << endl ;

    m3 = m1;
    m3.describe();
    cout << "Is m3 = m1? " << ( m3 == m1 ) << endl ;
    return 0;
}