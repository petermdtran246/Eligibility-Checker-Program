#include <iostream>
using namespace std;

// Define a function that takes an integer age as input
void Eligible(int age) {
    if (age < 12 || age > 50)
        cout << "eligible";
    else
        cout << "not eligible";
}

int main() {
    // Declare variable
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    // Call the Eligible function
    Eligible(age);
    return 0;
}