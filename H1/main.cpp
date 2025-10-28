#include <iostream>

void calcSum(int a, int b) {
    std::cout << a + b << std::endl;
}

void calcDiv(int a, int b) {
	if (b == 0) {
		std::cout << "Jakaja ei saa olla 0." << std::endl;
		return;
	}
    std::cout << float(a)/b << std::endl;
}

int retSum(int a, int b) {
	return a+b;
}

float retDiv(int a, int b) {
	if (b == 0) {
		throw std::runtime_error("jakaja ei saa olla nolla.");
	}
	return float(a)/b;
}

int main() {
    int a;
    int b;
    std::cout << "Anna luku a: ";
    std::cin >> a;

    std::cout << "Anna luku b: ";
    std::cin >> b;

	calcSum(a, b);
	calcDiv(a, b);

	int sumResult = retSum(a, b);
	std::cout << a << "+" <<  b << " = " << sumResult << std::endl;

	float divResult;
	try {
		divResult = retDiv(a, b);
		std::cout << a << "/" <<  b << " = " << divResult << std::endl;
	} catch (std::runtime_error& e) {
		std::cout<<"Error: "<< e.what()<< std::endl;
	}


    return 0;
}
