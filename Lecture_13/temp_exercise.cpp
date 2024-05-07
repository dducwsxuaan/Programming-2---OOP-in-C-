#include <iostream>
#include <string>
using namespace std;

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

