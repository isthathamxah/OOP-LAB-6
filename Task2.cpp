#include <iostream>
using namespace std;

class Arithmetic {
private:
    int num1, num2;
public:
    Arithmetic(int a, int b) : num1(a), num2(b) {}

    int operator+(Arithmetic obj) {
        return num1 + obj.num1;
    }

    int operator-(Arithmetic obj) {
        return num1 - obj.num1;
    }

    int operator*(Arithmetic obj) {
        return num1 * obj.num1;
    }

    int operator/(Arithmetic obj) {
        if (obj.num1 != 0) {
            return num1 / obj.num1;
        }
        else {
            cout << "Division by zero error!" << endl;
            return 0;
        }
    }
};

int main() {
    int a, b, choice;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    Arithmetic obj1(a, b), obj2(b, a);

    cout << "ARITHMETIC OPERATIONS" << endl;
    cout << "Press 1 for Addition" << endl;
    cout << "Press 2 for Subtraction" << endl;
    cout << "Press 3 for Multiplication" << endl;
    cout << "Press 4 for Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Addition: " << obj1 + obj2 << endl;
        break;
    case 2:
        cout << "Subtraction: " << obj1 - obj2 << endl;
        break;
    case 3:
        cout << "Multiplication: " << obj1 * obj2 << endl;
        break;
    case 4:
        cout << "Division: " << obj1 / obj2 << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
