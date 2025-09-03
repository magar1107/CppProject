#include <iostream>
#include<string>
using namespace std;
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    if (a > 0) {
        cout << "a is positive";
    }
    else if (a < 0) {
        cout << "a is negative";
    }
    else {
        cout << "a is 0"; // fixed 'Cout' to 'cout'
    }
}
