#include <iostream>
#include <string>
using namespace std;

class Square{
    private:
        int side;
    public:
        Square(){};
        Square(int side){
            this->side = side;
        }

        Square operator+(const Square &other){
            Square result (this->side + other.side);
            return result;
        }
        
        Square operator-(const Square &other){
            Square result (this->side - other.side);
            return result;
        }

        void describe(){
            cout << "Square ("<<this->side<<")" << endl;
        }
};


class Vector{
    private:
        int x;
        int y;
    public:
        Vector(){};
        Vector(int x, int y){
            this->x = x;
            this->y = y;
        }

        Vector operator+(const Vector &other){
            Vector result (this->x + other.x, this->y + other.y);
            return result;
        }

        Vector operator-(const Vector &other){
            Vector result (this->x - other.x, this->y - other.y);
            return result;
        }

        void describe(){
            cout << "Vector ("<<this->x<<", "<<this->y<<")" << endl;
        }
};
template <class T> class Data{
    private:
        T value1;
        T value2;
    public:
        Data (T value1, T value2){
            this->value1 = value1;
            this->value2 = value2;
        }

        T sum(){
            return value1 + value2;
        }

        T substract(){
            return value1 - value2;
        }
};

int main(){
    Vector v1 (4, 5);
    Vector v2 (3, 10);
    Square s1 (4);
    Square s2 (8);

    Data <Vector> sumVector(v1, v2);
    Vector v3 = sumVector.sum();
    v3.describe();

    Data <Square> sumSquare(s1, s2);
    Square s3 = sumSquare.sum();
    s3.describe();
    return 0;
}

