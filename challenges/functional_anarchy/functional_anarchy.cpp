#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <list>

int main(int argc, char** argv) {

    int times = 0;
    std::cin >> times;
    std::vector <int> numbers;
    for (int line = 0; line < times; line++) {
        int number = 0;
        std::cin >> number;
        numbers.push_back(number);
    }
    std::sort(numbers.begin(),numbers.end());
    for(auto n : numbers){
        std::cout << n << std::endl;
    }
    return 0;
}
