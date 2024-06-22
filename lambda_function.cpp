#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 8, 1, 9};

    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a < b;
    });

    for (int v : vec) {
        std::cout << v << " "; // Output: 1 3 5 8 9
    }
    std::cout << std::endl;

    return 0;
}
