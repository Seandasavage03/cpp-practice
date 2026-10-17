/*
[2] Function Prototype

把 calculateArea() definition 放在 main() 後面，
但 main() 仍可呼叫它。

calculateArea(width,height)
回傳 width * height。
*/
#include <iostream>

double calculateArea(int width, int height);

int main()
{
    std::cout << calculateArea(10,10);
    return 0;
}

double calculateArea(int width, int height)
{
    return width * height;
}
