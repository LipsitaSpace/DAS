#include <iostream>
using namespace std;

void squareValue(int val) {
    val = val * val;
    cout << "Square (by value): " << val << endl;
}

void squareRef(int &ref) {
    ref = ref * ref;
    cout << "Square (by reference): " << ref << endl;
}

int main() {
    int num1 = 4, num2 = 4;

    squareValue(num1);
    cout << "After squareValue: " << num1 << endl;

    squareRef(num2);
    cout << "After squareRef: " << num2 << endl;

    return 0;
}
