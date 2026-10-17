/*
[3] Debug Challenge

這段程式邏輯有問題。
如果輸入不是 5，也可能輸出 x equals 5。

找出並修正。
*/
#include <iostream>

int main()
{
    int x{};

    std::cout << "Enter x: ";
    std::cin >> x;

    if (x == 5)
    {
        std::cout << "x equals 5\n";
    }
    else
    {
        std::cout << "x does not equal 5\n";
    }

    return 0;
}
