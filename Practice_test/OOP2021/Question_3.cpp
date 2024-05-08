#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
class Point {
    private:
        float x;
        float y;
    public:
        Point (float x, float y) : x(x), y(y){};
        void print(){
            cout << x << ", " << y << " ";
        }
        float distance(const Point &other){
            return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
        }
};

class TwoDShape {
    private:
        Point centerPoint;
    public:
        TwoDShape(float x, float y) : centerPoint(x, y){};
        virtual double perimeter()=0;
        virtual double area()=0;
        void print(){
            cout << "The center point: ";
            centerPoint.print();
        }
        float distanceOfShape(const TwoDShape& other){
            return this->centerPoint.distance(other.centerPoint);
        }
};

class Circle : public TwoDShape{
    private:
        float radius;
    public:
        Circle(float radius, float x, float y) : radius(radius), TwoDShape(x, y){};
        void print() {
            cout << "The circle: ";
            TwoDShape :: print();
            cout << "- ";
            cout << "The radius: " << radius << endl;
        }
        double perimeter(){
            return 2 * 3.14 * radius;
        }
        double area(){
            return 3.14 * radius * radius;
        }
};

class Rectangle : public TwoDShape{
    private:
        float width;
        float height;
    public:
        Rectangle(float width, float height, float x, float y) : width(width), height(height), TwoDShape(x, y){};
        void print(){
            cout << "The rectangle: ";
            TwoDShape :: print();
            cout << "- ";
            cout << "The width: " << width << " - " << "The height: " << height << endl;
        }  
        double perimeter(){
            return 2 * (width + height);
        }
        double area(){
            return width * height;
        }
};

class Square : public TwoDShape{
    private:
        float side;
    public:
        Square(float side, float x, float y) : side(side), TwoDShape(x, y){};
        void print(){
            cout << "The square: ";
            TwoDShape :: print();
            cout << "- ";
            cout << "The side: " << side << endl;
        }
        double perimeter(){
            return side * 4;
        }
        double area(){
            return side * side;
        }
};

class Canvas {
    private:
        vector <TwoDShape*> listOfShape;
    public:
        void addShape(TwoDShape* shape){
            listOfShape.push_back(shape);
        }
        double areaOfShape(){
            double total = 0;
            for (TwoDShape* shape : listOfShape){
                total += shape->area();
            }
            return total;
        }
        void swap(TwoDShape* shape1, TwoDShape* shape2){
            TwoDShape* temp = shape1;
            shape1 = shape2;
            shape2 = temp;
            delete(temp);
        }
        void perimeter_descendant(){
            
        }
};

int main(){
    Canvas canvas;
    Square square(4, 5, 6);
    Rectangle rectangle(2, 3, 8, 9);
    Circle circle(3, 1, 10);
    
    square.print();
    rectangle.print();
    circle.print();

    cout << "The distance between square and rectangle: " << square.distanceOfShape(rectangle) << endl;

    cout << "The area of the square: " << square.area() << endl;
    cout << "The area of the rectangle: " << rectangle.area() << endl;
    cout << "The area of the circle: " << circle.area() << endl;

    cout << "The perimeter of the square: " << square.perimeter() << endl;
    cout << "The perimeter of the rectangle: " << rectangle.perimeter() << endl;
    cout << "The perimeter of the circle: " << circle.perimeter() << endl;

    canvas.addShape(&square);
    canvas.addShape(&rectangle);
    canvas.addShape(&circle);

    cout << "The total area: " << canvas.areaOfShape() << endl;
    return 0;
}