/*
[2] Logical Operators

image: 640 x 480
point: x=500 y=200
confidence=0.8

只有以下全部成立才輸出 Valid keypoint：
confidence >= 0.5
x >= 0
x < width
y >= 0
y < height

要求使用 &&。
*/
#include <iostream>

int main()
{
    int width{640};
    int height{480};
    int x{500};
    int y{200};
    double confidence{0.8};

    if (confidence >= 0.5 && x >= 0 && x < width && y >= 0 && y < height)
    {
        std::cout << "Valid keypoint";
    }
    else
    {
        std::cout << "Invalid keypoint";
    }
    return 0;
}
