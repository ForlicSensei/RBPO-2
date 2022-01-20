#include <iostream>
#include <cmath>
int main()
{
	double x, f;
	x = 2;
	std::cout << "Value х: " << x << std::endl;
	f = -sqrt(x);
	std::cout << "f = " << f << std::endl;
	std::cout << "Enter a value x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f = -sqrt(x);
	std::cout << "f = " << f << std::endl;
    return 0;
}



