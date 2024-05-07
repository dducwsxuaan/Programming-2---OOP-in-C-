#include <iostream>
using namespace std;
class Rectangle {
    private:
        float width;
        float height;
    public:
        Rectangle(float width, float height) : width(width), height(height){};
        float area(){
            return width * height;
        }
};

class Canvas {
    private:
        Rectangle *rectangle;
    public:
        Canvas (float width, float height) : rectangle(new Rectangle(width, height)){};
        void show(){
            cout << rectangle->area() << endl;
        }
};

int main(){
    Canvas canvas(5, 6);
    canvas.show();
    return 0;
}