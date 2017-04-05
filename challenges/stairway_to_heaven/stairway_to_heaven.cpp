#include <iostream>
#include <string>
#include <iomanip>

int main(int argc, char** argv) {
    int n, sp, w = 1, k;
    std::cin >> n;
    if (n < 1) {
        std::cout << "Error." << std::endl;
    }
    k = n - 1;
    for (int i = 0; i < n; i++) {
        sp = k;
        for (int j = 0; j < sp; j++) {
            std::cout << " ";
        }
        for (int m = 0; m < w; m++) {
            std::cout << "#";
        }
        std::cout << std::endl;
        k--;
        w++;
    }
    return 0;
}
