#include <iostream>
#include <vector>
#include <algorithm>

void remove_duplicates(std::vector<int>& vec) {

    std::sort(vec.begin(), vec.end());


    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

int main() {
    std::vector<int> vec;

    std::cout << "Enter numbers (enter a non-integer (e.g. 1.2) to finish):\n";
    int num;
    while (std::cin >> num) {
        vec.push_back(num);
    }

    remove_duplicates(vec);

    std::cout << "Unique numbers:\n";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
