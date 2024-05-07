#include <iostream>
#include <string>
using namespace std;
class Rectangle {
    private:
        int height;
        int width;

    public:
        Rectangle (int height, int width){
           this->height = height;
           this->width = width;
        }

        int getHeight(){
            return this->height;
        }

        int getWidth() {
            return this->width;
        }
};

int main(){
    Rectangle rec(5, 6);
    cout<<rec.getHeight()<<" "<<rec.getWidth()<<endl;
    return 0;
}