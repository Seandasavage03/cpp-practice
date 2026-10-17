/*
[2] Parameters

完成：
void printImageInfo(int width, int height)

輸出：
Image size: WIDTH x HEIGHT

main() 呼叫：
printImageInfo(640,480);
printImageInfo(1920,1080);
*/
#include <iostream>

void printImageInfo(int width, int height)
{
    std::cout << "Image size: " << width << " x " << height << '\n';
}

int main()
{
    printImageInfo(640,480);
    printImageInfo(1920,1080);
    return 0;
}
