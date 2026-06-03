#include <iostream>
#include <string>
using namespace std;

class DRDOScientist {
public:
    string name;
    string specialization;
    int clearanceLevel;
    
    void display() {
        cout << "=== DRDO Scientist Profile ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Specialization: " << specialization << endl;
        cout << "Clearance Level: " << clearanceLevel << endl;
        cout << "==============================" << endl;
    }
};

int main() {
    DRDOScientist s1;
    s1.name = "Arjun";
    s1.specialization = "Radar Systems";
    s1.clearanceLevel = 5;
    
    DRDOScientist s2;
    s2.name = "Priya";
    s2.specialization = "Missile Guidance";
    s2.clearanceLevel = 7;
    
    s1.display();
    s2.display();
    return 0;
}