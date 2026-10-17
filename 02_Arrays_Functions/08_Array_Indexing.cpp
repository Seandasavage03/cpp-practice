/*
[1] Array Indexing

values = {10,20,30,40,50}

1. 輸出第一個元素
2. 輸出第三個元素
3. 把第二個元素改成 999
4. 輸出修改後第二個元素
*/
#include <iostream>

int main()
{
    int values[]{10,20,30,40,50};

    std::cout << values[0] << '\n';
    std::cout << values[2] << '\n';
    values[1] = 999;
    std::cout << values[1] << '\n';
    return 0;
}
