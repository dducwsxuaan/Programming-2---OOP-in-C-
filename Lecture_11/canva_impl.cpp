#include <iostream>
using namespace std;
class Shape {
    public:
        virtual double area() = 0;
};

class Square : public Shape{
    private:
        double side;
    public:
        Square (double side) : side(side){};
        double area(){
            return side * side;
        }
};

class Rectangle : public Shape{
    private:
        double width;
        double height;
    public:
        Rectangle (double width, double height) : width(width), height(height){};
        double area(){
            return width * height;
        }
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle (double radius) : radius(radius){};
        double area(){
            return 3.14 * radius * radius;
        }
};

class Triangle : public Shape{
    private:
        double base;
        double height;
    public:
        Triangle (double base, double height) : base(base), height(height){};
        double area(){
            return 1/2 * base * height;
        }
};

class Canvas {
    public:
        // void showArea(Square *square){
        //     cout << "The area of the square: " << square->area() << endl;
        // }

        // void showArea(Rectangle *rectangle){
        //     cout << "The area of the rectangle: " << rectangle->area() << endl;
        // }

        void showArea(Shape *shape){
            cout << shape->area() << endl;
        }
};

int main(){
    Square *square = new Square(4.5);
    Rectangle rectangle(4, 7.5);
    Circle circle(6);
    Triangle triangle(5, 7);
    Canvas *canvas;
    canvas->showArea(square);
    canvas->showArea(&rectangle);
    canvas->showArea(&circle);
    canvas->showArea(&triangle);
    delete square;
    delete canvas;
    return 0;
}