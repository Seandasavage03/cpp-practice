/*
[1] while

使用 while 輸出 1~10。
不要造成 infinite loop。
*/
#include <iostream>

int main()
{
    int i{1};

    while (i <= 10)
    {
        std::cout << i << '\n';
        i++;
    }
    return 0;
}
