#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    for (int num = 1; num < 20; ++num) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << "\n";
    return 0;
}