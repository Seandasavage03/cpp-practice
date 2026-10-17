/*
[2] for + array

errors = {3.2,5.1,2.8,4.0}

1. 全部輸出
2. 總和
3. 平均

預期平均：3.775
*/
#include <iostream>

int main()
{
    double errors[]{3.2,5.1,2.8,4.0};
    int count{};
    double total{0};
    count = sizeof(errors) / sizeof(errors[0]);

    for (int i = 0; i < count; i++)
    {
        std::cout << errors[i] << '\n';
    }    

    for (int i = 0; i < count; i++)
    {
        total += errors[i];
    }    
    std::cout << "Total = " << total << '\n';
    std::cout << "Average = " << total / count << '\n';
    return 0;
}
