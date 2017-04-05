#include <iostream>
#include <string>

int main(int argc, char** argv) {

    int times = 0;
    std::cin >> times;
    for (int line = 0; line < times; line++) {
        std::string str;
        std::cin >> str;
        std::cout << str
                << " is "
                << ((str == std::string(str.rbegin(), str.rend())) ? "" : "not ")
                << "palindrome"
                << std::endl;

    }
    return 0;
}
