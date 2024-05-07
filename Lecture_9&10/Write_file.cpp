#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream outputStream;
    outputStream.open("data.txt");

    if (outputStream.is_open()){
        string line1 = "C++ Programming.\n";
        outputStream << line1;

        string line2 = "VGU 2022.";
        outputStream << line2;

        outputStream.close();
    }
    else {
        cout << "Unable to open file";
    }
    return 0;
}
