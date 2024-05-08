#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape {
    public:
        virtual double perimeter()=0;
        virtual double area()=0;
};

class Square : public Shape{
    private:
        int side;
    public:
        Square (int side){
            this->side = side;
        }

        double perimeter(){
            return 4 * side;
        }

        double area(){
            return side * side;
        }
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle (double radius){
            this->radius = radius;
        }

        double perimeter(){
            return 3.14 * 2 * radius;
        }

        double area(){
            return 3.14 * 3.14 * radius;
        }
};

int main(){
    Circle circle(3);
    Square square(5);

    vector <Shape*> vect;
    vect.push_back(&circle);
    vect.push_back(&square);

    for (int i = 0; i < vect.size(); i++){
        cout << vect[i]->area() << endl;
    }
}