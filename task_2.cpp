#include <iostream>
#include <cmath>

double f(double x) {
    double f;
    f = -sqrt(x);
    return f;
}

int main() {
    double x = 2;
    std::cout << "Value х: " << x << std::endl;
    std::cout << "f = " << f(x) << std::endl;
    std::cout << "Enter a value x: " << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "f = " << f(x) << std::endl;
return 0;
}