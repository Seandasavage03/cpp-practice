/*
[2] 2D Array

matrix:
1 2 3
4 5 6
7 8 9

1. 輸出中央元素
2. 輸出右下角
3. 把左上角改成 100
4. 再輸出左上角
*/
#include <iostream>

int main()
{
    int matrix[3][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    std::cout << matrix[1][1] << '\n';
    std::cout << matrix[2][2] << '\n';
    matrix[0][0] = 100;
    std::cout << matrix[0][0] << '\n';
    return 0;
}
