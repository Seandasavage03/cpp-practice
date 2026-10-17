/*
[3] Better Calculator

輸入：
num1
operator (+ - * /)
num2

用 if / else if 計算。

加分：
處理除以 0。
*/
#include <iostream>

int main()
{
    double num1{};
    double num2{};
    char op{};

    std::cout << "Please enter a number: ";
    std::cin >> num1;

    std::cout << "Please enter another number: ";
    std::cin >> num2;

    std::cout << "Please enter an operator: ";
    std::cin >> op;

    if(op == '+')
    {
        std::cout << num1 << " + " << num2 << " = " << num1 + num2;
    }

    else if(op == '-')
    {
        std::cout << num1 << " - " << num2 << " = " << num1 - num2;
    }

    else if(op == '*')
    {
        std::cout << num1 << " * " << num2 << " = " << num1 * num2;
    }
    
    else if(op == '/')
    {
        std::cout << num1 << " / " << num2 << " = " << num1 / num2;
    }
    return 0;
}
