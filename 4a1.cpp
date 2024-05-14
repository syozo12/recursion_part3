#include<iostream>
using namespace std;
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 5;
    int result = factorial(num);
    cout << "Factorial of " << num << " is: " << result;
    return 0;
}
