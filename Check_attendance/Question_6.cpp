#include <iostream>
using namespace std;

class Vector2D{
    private:
        int x;
        int y;
    public:
        Vector2D(int x, int y){
            this->x = x;
            this->y = y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }

        // Vector2D(const Vector2D& other){
        //     this->x = other.x;
        //     this->y = other.y;
        // }

        Vector2D& operator=(const Vector2D& other){
            this->x = other.x;
            this->y = other.y;
            return *this;
        }
};

int main(){
    Vector2D vector1(4, 6);
    Vector2D vector2 = vector1;
    cout << "Vector 1: " << vector1.getX() << " , " << vector1.getY() << endl;
    cout << "Vector 2: " << vector2.getX() << " , " << vector2.getY() << endl;
    return 0;
}
