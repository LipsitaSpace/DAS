#include <iostream>
using namespace std;

class HandsOn {
    
public:
    void determineGrade() {
        int marks;
        cout << "Enter your marks: ";
        cin >> marks;

        if (marks >= 90) {
            cout << "Grade A" << endl;
        } else if (marks >= 70) {
            cout << "Grade B" << endl;
        } else if (marks >= 50) {
            cout << "Grade C" << endl;
        } else if (marks >= 35) {
            cout << "Grade D" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
};

int main() {
    HandsOn student;
    student.determineGrade();
    return 0;
}
