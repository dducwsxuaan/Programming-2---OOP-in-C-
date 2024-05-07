#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string line;
    ifstream inputStream("data_read.txt");

    if (inputStream.is_open()){
        while (getline(inputStream, line)){
            cout << line <<'\n';
        }
        inputStream.close();
    }
    else {
        cout << "Unable to open file";
    }
    return 0;
}