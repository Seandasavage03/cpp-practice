/*
[3] Nested Loops

使用 nested for：
1. 印出完整 3x3 matrix
2. 計算所有元素總和

預期總和：45
*/
#include <iostream>

int main()
{
    int matrix[3][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int total{0};

    for (int i = 0; i < 3; i++)
    {
        std::cout << '{';
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrix[i][j];
        }
        std::cout << '}' << '\n';
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total = total + matrix[i][j];
        }
    }

    std::cout << total;
    return 0;
}
