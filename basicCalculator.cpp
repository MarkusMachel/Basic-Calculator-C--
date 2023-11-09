#include <iostream> //bsic input output stream

int main() {
    // basic calculator

    char operation;
    double num1;
    double num2;
    double result;

    std::cout << "********** Calculator **********" << std::endl;

    std::cout << "Enter either +, -, *, /: ";
    std::cin >> operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation)
    {
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
            result = num1 / num2;
            std::cout << "Result: " << result << std::endl;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            break;
    }



    std::cout << "*********************************" << std::endl;


    return 0;
}