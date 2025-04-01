#include <iostream>
#include <climits>

int main() {
    std::cout << "unsigned int: " << sizeof(unsigned int) * 8 << " bits\n";
    std::cout << "unsigned long: " << sizeof(unsigned long) * 8 << " bits\n";
    std::cout << "unsigned long long: " << sizeof(unsigned long long) * 8 << " bits\n";
    std::cout << "size_t: " << sizeof(size_t) * 8 << " bits\n";
    return 0;
}