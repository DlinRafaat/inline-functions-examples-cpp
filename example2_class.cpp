#include <iostream>
using namespace std;

class Math {
public:
    inline int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << "5 + 3 = " << m.add(5, 3) << endl;
    return 0;
}

// This example shows an inline function inside a class. The add() function is small and is used to quickly return the sum of two numbers. 
// Since it’s marked inline, the compiler can place its code directly where it is called, making the operation faster.
