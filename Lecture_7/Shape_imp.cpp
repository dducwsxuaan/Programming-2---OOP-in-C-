#include <iostream>
using namespace std;

class Shape {
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
};

class Square : public Shape {
    private:
        double side;
    public:
        Square (double side){
            this->side = side;
        }

        double area (){
            return this->side * this->side;
        }

        double perimeter (){
            return this->side * 4;
        }
};

class Circle : public Shape {
    private:
        double radius;
    public:
        Circle (double radius){
            this->radius = radius;
        }

        double area (){
            return this->radius * this->radius * 3.14;
        }

        double perimeter (){
            return this->radius * 2 * 3.14;
        }
};

int main(){
    Square square (7);
    Circle circle (7);
    cout << "The area of the square: " << square.area() << endl;
    cout << "The perimeter of the square: " << square.perimeter() << endl;
    cout << "The area of the circle: " << circle.area() << endl;
    cout << "The perimeter of the circle: " << circle.perimeter() << endl;
}