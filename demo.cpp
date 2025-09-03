#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Class definition
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Member function
    void introduce() const {
        std::cout << "Hello, my name is " << name
                  << " and I'm " << age << " years old.\n";
    }

    // Getter
    std::string getName() const { return name; }

    // Setter
    void setAge(int a) { age = a; }
};

// Function prototype
void printVector(const std::vector<int>& vec);

int main() {
    // Basic variable declarations
    int number = 42;
    double pi = 3.14159;
    std::string greeting = "Hello, World!";

    // Output
    std::cout << greeting << " The number is " << number << "\n";

    // Conditional statement
    if (number > 0) {
        std::cout << "Number is positive\n";
    } else if (number < 0) {
        std::cout << "Number is negative\n";
    } else {
        std::cout << "Number is zero\n";
    }

    // Loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteration " << i << "\n";
    }

    // Vector usage
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    printVector(numbers);

    // Class usage
    Person alice("Alice", 30);
    alice.introduce();
    alice.setAge(31);
    std::cout << "Updated age for " << alice.getName() << "\n";

    return 0;
}

// Function definition
void printVector(const std::vector<int>& vec) {
    std::cout << "Vector contents: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}