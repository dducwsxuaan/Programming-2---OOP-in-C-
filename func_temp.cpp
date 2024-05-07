#include <iostream>
#include <string>
using namespace std;

class Square {
    private:
        int side;
    public:
        Square(int side){
            this->side = side;
        }

        Square operator+(const Square &other){
            Square result(this->side + other.side);
            return result;
        }
        void describe(){
            cout << "Side: " << this->side << endl;
        }
};

template<typename T> T add(T a, T b){
    return a + b;
}

int main(){
    int i1 = 3;
    int i2 = 4;
    cout << "(i1 + i2): " << add(i1, i2) << endl;

    double d1 = 1.5;
    double d2 = 2.6;
    cout << "(d1 + d2): " << add(d1, d2) << endl;

    string s1 = "C++";
    string s2 = "Programming";
    cout << "(s1+s2): " << add(s1, s2) << endl;

    Square square1(3);
    Square square2(7);
    Square square3 = add(square1, square2);
    square3.describe();
    
    return 0;

}