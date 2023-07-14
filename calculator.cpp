#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            break;
    }

    return 0;
}
