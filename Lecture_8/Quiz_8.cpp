#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        string color = "black";
        void describe(){
            cout << "Color: " << color << endl;
        }
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double radius, string color) : Shape(){
            this->color = color;
            this->radius = radius;
        }
        void describe(){
            cout << "Color: " << color << ", Radius: " << radius << endl;
        }
};


class Rectangle : public Shape{
    private:
        double width;
        double height;
    public:
        Rectangle(double width, double height, string color) : Shape(){
            this->color = color;
            this->width = width;
            this->height = height;
        }
        void describe(){
            cout << "Color: " << color << ", Width: " << width << ", Height: " << height << endl;
        }
};

int main(){
    Circle c1(5, "red");
    Rectangle r1(3, 4, "blue");

    c1.describe();
    r1.describe();
}