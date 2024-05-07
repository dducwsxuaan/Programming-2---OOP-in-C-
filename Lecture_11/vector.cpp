#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

class Shape {
    public:
        virtual void describe() = 0;
};

class Square : public Shape{
    private:
        float side;
    public:
        Square (float side) : side(side){};
        void describe(){
            cout << "Square: " << side << endl;
        }
};

class Circle : public Shape{
    private:
        float radius;
    public:
        Circle (float radius) : radius(radius){};
        void describe(){
            cout << "Circle: " << radius << endl;
        }
};

class RightTriangle : public Shape{
    private:
        float base;
        float height;
    public:
        RightTriangle(float base, float height) : base(base), height(height){};
        void describe(){
            cout << "Right Triangle: "<<base << " , " << height << endl;
        } 
};

class Canvas {
    private:
        vector <Shape*> listOfShape;
    public:
        void addShape(Shape* shape){
            listOfShape.push_back(shape);
        }
        void describe(){
            for (int index = 0; index < listOfShape.size(); index++){
                listOfShape[index]->describe();
            }
        }
        int countShapeType(const type_info& shapeType){
            int count = 0;
            for (Shape* shape : listOfShape){
                if (typeid(*shape) == shapeType){
                    count++;
                }
            }
            return count;
        }
};

int main(){
    Canvas canvas;
    Square square1(3);
    Square square2(4);
    Circle circle1(4);
    RightTriangle rightTriangle1(4, 6);
    canvas.addShape(&square1);
    canvas.addShape(&square2);
    canvas.addShape(&circle1);
    canvas.addShape(&rightTriangle1);
    cout << "Number of Triangle: " << canvas.countShapeType(typeid(RightTriangle)) << endl;
    cout << "Number of Square: " << canvas.countShapeType(typeid(Square)) << endl;
    cout << "Number of Circle: " << canvas.countShapeType(typeid(Circle));

    //canvas.describe();
    return 0;
}