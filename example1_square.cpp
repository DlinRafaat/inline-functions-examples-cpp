#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5 is: " << square(5) << endl;
    cout << "Square of 10 is: " << square(10) << endl;
    return 0;
}


// This program uses an inline function called square() that returns the value of a number multiplied by itself. 
// Because it is marked as inline, the compiler can insert the expression x * x directly into the code whenever square() is called. In the main function, the program calls square(5) and square(10) and prints the results. 
// This example shows how inline functions are useful for small, repeated calculations that benefit from faster execution.
