#include <iostream>
#include <string>  // Needed for string
using namespace std;

class Student {  // 'class' should be lowercase
public:
    int rno;
    string name;
    float cgpa;
};

int main() {
    Student S1;
    cout << "Enter name: ";
    cin >> S1.name;
    cout << "Name entered: " << S1.name << endl;
    return 0;
}
