#include <iostream>
using namespace std;
class Counter {
private:
    int count;

public:
    Counter(int initialCount = 0) : count(initialCount) {}

    // Prefix increment operator overloading
    Counter operator++() {
        ++count;
        return *this;
    }

    int getCount() const {
        return count;
    }

    // Postfix increment operator overloading
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }
};

int main() {
    
    Counter c(5);
    cout << "Initial count: " << c.getCount() << endl;

    c++; // Using the overloaded prefix increment operator

    cout << "Count after increment: " << c.getCount() << endl;

    return 0;
}


