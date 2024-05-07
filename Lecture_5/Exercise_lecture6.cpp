#include <iostream>
#include <string>
using namespace std;

class Vector2D{
    private:
            int x;
            int y;
    public:
         Vector2D (int x, int y){
            this->x = x;
            this->y = y;
        }

        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        Vector2D operator-(){
            return Vector2D(-x, -y);
        }

        Vector2D operator--(){
            x--;
            y--;
            return *this;
        }

        bool operator==(const Vector2D& other){
            return (x == other.x) && (y == other.y);
        }

        int operator*(const Vector2D& other){
            return (x * other.x) + (y * other.y);
        }
};

int main() {
    // Create two Vector2D objects
    Vector2D v1(3, 4);
    Vector2D v2(5, 2);

    // Use the overloaded operators
    Vector2D v3 = -v1;
    Vector2D v4 = --v2;

    // Check if two vectors are equal
    bool areEqual = v1 == v2;

    // Calculate the dot product of two vectors
    int dotProduct = v1 * v2;

    // Print the results
    cout << "v1: (" << v1.getX() << ", " << v1.getY() << ")" << endl;
    cout << "v2: (" << v2.getX() << ", " << v2.getY() << ")" << endl;
    cout << "-v1: (" << v3.getX() << ", " << v3.getY() << ")" << endl;
    cout << "--v2: (" << v4.getX() << ", " << v4.getY() << ")" << endl;
    cout << "v1 == v2: " << (areEqual ? "true" : "false") << endl;
    cout << "v1 * v2: " << dotProduct << endl;

    return 0;
}