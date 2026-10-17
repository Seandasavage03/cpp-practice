/*
[2] Array

widths  = 640, 1280, 1920
heights = 480, 720, 1080

先不要 loop。
輸出：
Image 0: 640 x 480
Image 1: 1280 x 720
Image 2: 1920 x 1080
*/
#include <iostream>

int main()
{
    int widths[]{640,1280,1920};
    int heights[]{480,720,1080};

    std::cout << "Image 0: " << widths[0] << " x " << heights[0] << '\n';
    std::cout << "Image 1: " << widths[1] << " x " << heights[1] << '\n';
    std::cout << "Image 2: " << widths[2] << " x " << heights[2] << '\n';
    return 0;
}
