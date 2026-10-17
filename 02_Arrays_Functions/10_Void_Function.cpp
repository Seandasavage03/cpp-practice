/*
[1] void Function

完成：
void printWelcome()

輸出：
Welcome to C++ CV practice!

在 main() 呼叫兩次。

思考：
為什麼 void function 不用 return 0？
*/
#include <iostream>

void printWelcome()
{
    std::cout << "Welcome to C++ CV practice!" << '\n';
}

int main()
{
    printWelcome();
    printWelcome();
    return 0;
}
