#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape{
    public:
        virtual void describe()=0;
        virtual Shape* add(int value)=0;
};

class Square : public Shape{
    private:
        int side;
    public:
        Square() {};
        Square(int side){
            this->side = side;
        }

        Square* add(int value){
            Square* sq = new Square(side + value);
            return sq;
        }   

        void describe(){
            cout << "side: " << side << endl;
        }
};

class Circle : public Shape {
    private:
        int radius;
    public:
        Circle() {};
        Circle(int radius){
            this->radius = radius;
        }

        Circle* add(int value){
            Circle* c = new Circle(radius + value);
            return c;
        }

        void describe(){
            cout << "radius: " << radius << endl;
        }
};

int main(){
    Square square(5);
    Circle circle(6);

    vector <Shape*> vect;
    vect.push_back(&square);
    vect.push_back(&circle);

    for (int i = 0; i < vect.size(); i++){
        Shape* s = vect[i]->add(8);
        s->describe();
        delete s;
    }

    return 0;
}