#include<iostream>
#include<string>
using namespace std;

class Complex{
    private:
        float real;
        float img;
    
    public:
        Complex(){}

        Complex(float real, float img){
            this->real = real;
            this->img = img;
        }

        Complex(const Complex &obj){
            this->real = obj.real;
            this->img = obj.img;
        }

        Complex operator+(const Complex other){
            Complex result;
            result.real = this->real + other.real;
            result.img = this->img + other.img;
            return result;
        }

        bool operator==(const Complex other){
            return (this->real == other.real) && (this->img == other.img);
        }

        void operator=(const Complex &obj){
            this->real = obj.real;
            this->img = obj.img;
        }

        void describe(){
            cout << this->real << " , " << this->img <<endl;
        }
};

int main(){
    Complex c1(5, 6);
    Complex c2(7.5, 8.5);
    Complex c3(c1);
    Complex c4 = c1 + c2;
    
    c1.describe();
    c2.describe();
    c3.describe();
    c4.describe();

    cout << "c1 == c2: " << ((c1 == c2)? "True" : "False") << endl;
    c1 = c2;
    c1.describe();
    return 0;
}
