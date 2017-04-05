#include <iostream>
#include <algorithm>
#include <string>

bool IsAnagram(std::string str1, std::string str2) {
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main(int argc, char** argv) {

    int times = 0;
    std::cin >> times;
    for (int line = 0; line < times; line++) {
        std::string str1, str2;
        std::cin >> str1 >> str2;
        std::cout << str1
                << " is"
                << (!IsAnagram(str1, str2) ? " not " : "")
                << " an anagram of "
                << str2
                << std::endl;

    }
    return 0;
}
