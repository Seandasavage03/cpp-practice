/*
[3] do while

要求使用者輸入 confidence。
只接受 0.0 ~ 1.0。

超出範圍就重新輸入。
*/
#include <iostream>

int main()
{
    double confidence{};

    do
    {
        std::cout << "Please enter confidence: ";
        std::cin >> confidence;
    }
    while (confidence < 0.0 || confidence > 1.0);
    
    return 0;
}
