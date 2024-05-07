#include <iostream>
using namespace std;

// int main(){
//     int a = 135;
//     int *b = &a;
//     cout << "Before the change: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << *b << endl;
//     cout << "The address of a: " << b << endl;
//     (*b)++;
//     cout << "After the change: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << *b << endl;
//     cout << "The address of a: " << b << endl;
//     return 0;
// }

// int main() {
//     int a = 15;
//     int b = 16;
//     int c = 15;
//     cout << (a & b) << endl;
//     cout << (a & c) << endl;
//     return 0; 
// }

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 45;
    int y = 89;
    cout << "x and y before swap: " << x << " , " << y << endl;
    swap(x, y);
    cout << "x and y after swap: " << x << " , " << y << endl;
    return 0;
}
