// iostream is needed for reading and writing the console
#include <iostream>

// string is needed for handling strings
#include <string>

int main() {
	std::cout << "Enter your name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << "!\n";
}
