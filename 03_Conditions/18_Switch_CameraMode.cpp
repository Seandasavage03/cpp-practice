/*
[2] switch

cameraMode:
0 -> RGB
1 -> Depth
2 -> Infrared
其他 -> Unknown

使用 switch。
*/
#include <iostream>

int main()
{
    int cameraMode{};

    std::cout << "Which camera mode is it?: ";
    std::cin >> cameraMode;

    switch(cameraMode)
    {
        case 0:
            std::cout << "RGB";
            break;

        case 1:
            std::cout << "Depth";
            break;

        case 2:
            std::cout << "Infrared";
            break;

        default:
            std::cout << "Unknown";
            break;
    }
    return 0;
}
