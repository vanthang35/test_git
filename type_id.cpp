#include <iostream>
#include <typeinfo>

int main() {
    int x = 10;
    const std::type_info& type = typeid(x);
    
    std::cout << "Type of x is: " << type.name() << std::endl;
    
    return 0;
}
