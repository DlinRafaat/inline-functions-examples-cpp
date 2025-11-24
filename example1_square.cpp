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
