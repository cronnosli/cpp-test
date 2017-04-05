#include <iostream>

//O(n) solution

uint64_t Fibonacci(uint64_t i) {
    if (i == 0) {
        return 0;
    } else {
        uint64_t a[2] = {1, 1};
        while (i-- > 2) {
            a[i & 1] = a[0] + a[1];
        }
        return a[0];
    }
}

int main(int argc, char** argv) {

    uint64_t number = 0;
    std::cin >> number;
    std::cout << Fibonacci(number)
            << std::endl;

    return 0;
}
