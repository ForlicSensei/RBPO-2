#include "func_1.h"

int main() {
    std::cout << "Value х: " << x << std::endl;
    Sofronov::f();
    std::cout << "f = " << result << std::endl;
    std::cout << "Enter a value x: " << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    Sofronov::f();
    std::cout << "f = " << result << std::endl;
    return 0;
}

