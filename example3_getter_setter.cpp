#include <iostream>
using namespace std;

class Person {
private:
    int age;

public:
    inline void setAge(int a) { age = a; }
    inline int getAge() const { return age; }
};

int main() {
    Person p;
    p.setAge(20);
    cout << "Age: " << p.getAge() << endl;
    return 0;
}


//This example uses inline getter and setter functions inside a class. The setAge() function stores a value in the private variable, and getAge() returns it. 
// Because these functions are small and used often, marking them as inline helps keep them fast and efficient.
