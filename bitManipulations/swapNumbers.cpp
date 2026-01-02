#include <iostream>

using namespace std;

/*
Function to swap two numbers using XOR bitwise operation.
Example:
Input: a = 5, b = 10
Output: a = 10, b = 5
*/
void swapNumbers(int& a, int& b) {
    a = a ^ b;
    b = a ^ b;  // b now becomes original a
    a = a ^ b;  // a now becomes original b
}

int main() {
    int a = 5;   // Example value
    int b = 10;  // Example value

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapNumbers(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}