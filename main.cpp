#include <iostream>

using namespace std;

class Student {
    public :
    string name;
    string major;
    double gpa;
    Student( string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }
    bool hasHonors() {
        if(gpa >= 3.5) {
            return true;
        }
        return false;
    }

};

int main () 
{

    Student student1("Tom", "Finance", 3.3);
    Student student2("Sarah", "BioChem", 3.5);

    // 0 means false
    cout << student1.hasHonors();
    // 1 means true
    cout << student2.hasHonors();

    return 0;
}