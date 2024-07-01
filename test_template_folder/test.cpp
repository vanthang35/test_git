#include <iostream>
#include <algorithm> // For std::find
#include <vector>    // For std::vector

int main() {
    // Khai báo vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    // Tìm phần tử có giá trị là 6 trong vector
    int searchValue = 2;
    auto it = std::find(vec.begin(), vec.end(), searchValue);
    
    // Kiểm tra kết quả
    if (it != vec.end()) {
        std::cout << "Phần tử " << searchValue << " tồn tại trong vector." << std::endl;
    } else {
        std::cout << "Phần tử " << searchValue << " không tồn tại trong vector." << std::endl;
    }
    
    return 0;
}
