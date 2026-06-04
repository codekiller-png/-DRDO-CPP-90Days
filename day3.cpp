#include <iostream>
#include <string>
using namespace std;

// Base class
class DRDOScientist {
protected: // child classes can access, but not main()
    int clearanceLevel;
    
public:
    string name;
    string lab;
    
    DRDOScientist(string n, string l, int c) {
        name = n;
        lab = l;
        clearanceLevel = c;
        cout << "DRDO Scientist " << name << " onboarded at " << lab << endl;
    }
    
    void displayBasic() {
        cout << "Name: " << name << ", Lab: " << lab 
             << ", Clearance: " << clearanceLevel << endl;
    }
    
    void checkClearance() {
        cout << name << " has Level " << clearanceLevel << " clearance" << endl;
    }
};

// Derived class - public inheritance
class MissileScientist : public DRDOScientist {
private:
    string missileProject;
    int warheadsTested;
    
public:
    // Constructor must call base class constructor
    MissileScientist(string n, string l, int c, string proj, int tests) 
        : DRDOScientist(n, l, c) { // call base constructor
        missileProject = proj;
        warheadsTested = tests;
        cout << name << " assigned to Project " << missileProject << endl;
    }
    
    void displayFull() {
        displayBasic(); // inherited from base
        cout << "Project: " << missileProject 
             << ", Tests Conducted: " << warheadsTested << endl;
        // cout << clearanceLevel; // WORKS - protected in base
    }
    
    void launchTest() {
        if(clearanceLevel >= 4) { // can access protected member
            cout << "Test launch authorized for " << missileProject << endl;
        } else {
            cout << "Clearance denied. Level 4 required." << endl;
        }
    }
};

int main() {
    MissileScientist ms1("Dr. Sharma", "DRDL", 5, "Agni-V", 12);
    ms1.displayFull();
    ms1.launchTest();
    ms1.checkClearance(); // inherited public function
    
    // ms1.clearanceLevel = 1; // ERROR - protected, can't access from main
    return 0;
}