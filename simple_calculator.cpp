#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter your first value: ";
    cin >> a;  
    cout << "Enter your second value: ";
    cin >> b;   
    
    char op;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+': 
            cout << (a + b) << endl;
            break;

        case '-':
            cout << (a - b) << endl;
            break;

        case '*':
            cout << (a * b) << endl;
            break;

        case '/':
            if (b != 0)
                cout << (a / b) << endl;
            else
                cout << "Division by zero error" << endl;
            break;

        case '%':
            if (b != 0)
                cout << (a % b) << endl;
            else
                cout << "Modulo by zero error" << endl;
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
