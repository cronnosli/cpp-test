#include <iostream>
#include <string>

int main(int argc, char** argv) {

    int times = 0;
    std::cin >> times;
    int dirty = 0;
    for (int line = 0; line < times; line++) {
        std::string str;
        int bills = 0;
        std::cin >> bills >> str;
        if (str == "dirty") {
            dirty += bills;
        }
    }
    std::string amount = (dirty == 0) ? "no" : std::to_string(dirty);


    std::cout << "There are "
            << amount
            << " dirty bills."
            << std::endl;
    return 0;
}
