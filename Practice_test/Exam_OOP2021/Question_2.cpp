#include <iostream>
#include <string>
using namespace std;

class Complex{
    private:
        float real;
        float img;
    public:
        Complex(){};
        Complex(float real, float img) : real(real), img(img){};
        Complex(const Complex &other){
            this->real = other.real;
            this->img = other.img;
        }
        Complex operator+ (const Complex &other){
            return Complex(this->real + other.real, this->img + other.img);
        }
        bool operator== (const Complex &other){
            return (this->real == other.real) && (this->img == other.img);
        }
        Complex *operator= (const Complex &other){
            this->real = other.real;
            this->img = other.img;
            return this;
        }
};