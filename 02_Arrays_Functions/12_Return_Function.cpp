/*
[2] Return

完成：
double normalizeCoordinate(int coordinate, int size)

normalizeCoordinate(320,640) -> 0.5

注意 integer division。
*/
#include <iostream>

double normalizeCoordinate(int coordinate, int size)
{
    return static_cast<double>(coordinate) / size;
}

int main()
{
    std::cout << normalizeCoordinate(320,640) << '\n';
    return 0;
}
