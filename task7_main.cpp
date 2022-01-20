#include <iostream>

void f();

int main() {
    std::cout << "Value х: " << x << std::endl;
    f();
    std::cout << "f = " << result << std::endl;
    std::cout << "Enter a value x: " << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    f();
    std::cout << "f = " << result << std::endl;
    return 0;
}

