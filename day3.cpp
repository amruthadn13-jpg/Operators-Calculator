#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "========== Operators Calculator ==========" << endl;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\n========== Arithmetic Operations ==========" << endl;
    cout << "Addition       : " << a + b << endl;
    cout << "Subtraction    : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division       : " << a / b << endl;
    cout << "Modulus        : " << a % b << endl;

    cout << "\n========== Relational Operations ==========" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    cout << "\n========== Logical Operations ==========" << endl;
    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b > 0) : " << (a > 0 || b > 0) << endl;
    cout << "!(a > 0)        : " << !(a > 0) << endl;

    cout << "\n========== Assignment Operations ==========" << endl;
    int temp = a;
    temp += b;
    cout << "After temp += b : " << temp << endl;

    return 0;
}
