#include <iostream>
#include <string>
using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        Point(int x, int y) : x(x), y(y){};
        void print(){
            cout << x << ", " << y << " ";
        }
};

class TwoDShape {
    private:
        Point *centerPoint;
    public:
        TwoDShape(int x, int y) : centerPoint(new Point(x, y)){};
        void print(){
            cout << "center point: " ;
            centerPoint->print();
        }
        ~TwoDShape(){
            delete centerPoint;
        }
};

class Rectangles : public TwoDShape {
    private:
        double width;
        double height;
    public:
        Rectangles(double width, double height, int x, int y) : width(width), height(height), TwoDShape(x, y){};
        void print(){
            cout << "The rectangle: ";
            TwoDShape::print();
            cout << "width: " << width << " ";
            cout << "height: " << height << endl; 
        }
};

class Squares : public TwoDShape {
    private:
        double side;
    public:
        Squares(double side, int x, int y) : side(side), TwoDShape(x, y){};
        void print(){
            cout << "The square: ";
            TwoDShape::print();
            cout << "side: " << side << endl;
        }
};

class Circles : public TwoDShape{
    private:
        double radius;
    public:
        Circles(double radius, int x, int y) : radius(radius), TwoDShape(x, y){};
        void print(){
            cout << "The circle: ";
            TwoDShape::print();
            cout << "radius: " << radius <<endl;
        }
};

int main(){
    Rectangles rectangle1(4, 5, 8, 7);
    rectangle1.print();
    Squares square1(5, 4, 5);
    square1.print();
    Circles circle1(3.4, 4, 7);
    circle1.print();
    return 0;
}