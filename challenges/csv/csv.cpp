#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>

struct csv_line {
    std::string name;
    std::string state;
    std::string city;
    std::string country;
    int age;
};

int main(int argc, char** argv) {
    std::vector <csv_line> csv;
    int lines = 0;
    std::cin >> lines;
    for (int line = 0; line <= lines; line++) {
        std::string line_input, parsed;
        std::getline(std::cin, line_input);
        if (!line_input.empty()) {
            std::istringstream iss(line_input);
            csv_line this_line;
            getline(iss, this_line.name, ',');
            getline(iss, this_line.state, ',');
            getline(iss, this_line.city, ',');
            getline(iss, this_line.country, ',');
            getline(iss, parsed, ',');
            this_line.age = parsed.empty() ? 0 : std::stoi(parsed);
            csv.push_back(this_line);
        }
    }

    for (auto detail : csv) {
        std::cout << detail.name
                << " is "
                << detail.age
                << " years old and lives in "
                << detail.city
                << ", "
                << detail.state
                << '.'
                << std::endl;
    }
    return 0;
}
