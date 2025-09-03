#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    int choice;

    cout << "Choose conversion:" << endl;
    cout << "1 for Fahrenheit to Celsius" << endl;
    cout << "2 for Celsius to Fahrenheit" << endl;
    cin >> choice;

    if(choice == 1) { // Fahrenheit → Celsius
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;          // user enters Fahrenheit
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << celsius << endl;
    }
    else if(choice == 2) { // Celsius → Fahrenheit
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;            // user enters Celsius
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
    else {
        cout << "Please choose 1 or 2." << endl;
    }

    return 0;
}
