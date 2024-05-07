#include <iostream>
#include <string>
using namespace std;

class Vector{
  private:
    int x;
    int y;
    
  public:
    Vector(int x, int y){
        this->x = x;
        this->y = y;
    }
    void add(Vector &another){
        this->x = this->x + another.x;
        this->y = this->y + another.y;
    }
    void multiply(int number){
        this->x = this->x * number;
        this->y = this->y * number;
    }
    
    void printCoord(){
        cout <<"Coordinate : (" << x << "," << y << ") \n";
    }   
};

int main() {
    Vector u(2,9);
    Vector v(-5,2);
    cout << "vector u (before): ";
    u.printCoord();
    cout << "vector v (before): ";
    v.printCoord();
    
    
    int k=6;
    u.add(v);
    v.multiply(k);
    cout << "vector u (after): ";
    u.printCoord();
    cout << "vector v (after): ";
    v.printCoord();
    return 0;
}