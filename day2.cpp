#include <iostream>
using namespace std;

class Box {
public:
    int length;
    
    Box(int l) { // constructor
        length = l;
        cout << "Box created with length " << length << endl;
    }
    
    void show() {
        cout << "Length is " << this->length << endl;
    }
    
    ~Box() { // destructor
        cout << "Box destroyed" << endl;
    }
};

int main() {
    Box b1(10); // constructor runs
    Box b2(25); // constructor runs again
    b1.show();
    b2.show();
    return 0; // both destructors run here
}