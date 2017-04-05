#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <list>
#include <vector>

int main(int argc, char** argv) {

    int queries = 0;
    std::cin >> queries;
    std::vector <std::string> students;
    for (int query_c = 0; query_c < queries; query_c++) {
        int query = 0, param = 0;
        std::cin >> query >> param;
        if (query == 1) {
            for (int n_student = 0; n_student <= param; n_student++) {
                std::string student;
                std::getline(std::cin, student);
                if (!student.empty()) {
                    students.push_back(student);
                }

            }
            std::sort(students.begin(), students.end());
        } else if (query == 2) {
            for (int n_student = 0; n_student < param; n_student++) {
                int student_id = 0;
                std::cin >> student_id;
                std::cout << students[--student_id] << std::endl;
            }
        }
    }
    return 0;
}
