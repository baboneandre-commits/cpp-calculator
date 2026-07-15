#include <iostream>

int main() {
    int option;

    std::cout << "=========================\n";
    std::cout << "       CALCULATOR\n";
    std::cout << "=========================\n";
    std::cout << "1 - Addition\n";
    std::cout << "2 - Subtraction\n";
    std::cout << "3 - Multiplication\n";
    std::cout << "4 - Division\n";
    std::cout << "0 - Exit\n";
    std::cout << "Choose an option: ";

    std::cin >> option;

    std::cout << "Selected option: " << option << '\n';

    return 0;
}