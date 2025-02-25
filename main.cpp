#include <iostream>

int main() {

    long long n; //Try to use long long instead of int to avoid overflow

    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Please enter a positive integer greater than 0." << std::endl;
        return 1; // Return with an error code
    }

    // Collatz conjecture algorithm
    while (n != 1) {
        std::cout << n << " "; 
        if (n % 2 == 0) {  // Even case
            n = n / 2;
        } else {  // Odd case
            n = 3 * n + 1;
        }
    }
    std::cout << n << std::endl; 

    return 0;
}
