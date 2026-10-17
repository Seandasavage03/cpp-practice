/*
[3] Max of Three

寫：
double getMax(double a,double b,double c)

不能使用 std::max。
使用 if / else if / else。

測試至少三組。
*/
#include <iostream>

double getMax(double a,double b,double c)
{
    if (a > b && a > c)
    {
        std::cout << "The maximum number is " << a << '\n';
    }
    else if (b > a && b > c)
    {
        std::cout << "The maximum number is " << b << '\n';
    }
    else
    {
        std::cout << "The maximum number is " << c << '\n';
    }
    return 0.0;
}

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Please enter the first number: ";
    std::cin >> a;

    std::cout << "Please enter the second number: ";
    std::cin >> b;

    std::cout << "Please enter the third number: ";
    std::cin >> c;

    getMax(a, b, c);
    return 0;
}
