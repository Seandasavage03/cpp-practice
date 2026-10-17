/*
[3] Exponent Function

寫：
int power(int base,int exponent)

不能使用 pow()。

power(2,3) -> 8
power(5,4) -> 625
*/
#include <iostream>

int power(int base,int exponent)
{
    int result{1};
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    std::cout << power(2, 3);
    return 0;
}
