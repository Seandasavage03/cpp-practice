/*
[4] CV — Frame x Keypoint

3 frames，每 frame 4 個 confidence：

0.9 0.8 0.3 0.7
0.4 0.6 0.2 0.9
0.8 0.9 0.7 0.6

任務：
1. nested loop 印出全部
2. 每 frame 算 >=0.5 數量
3. 找出 valid keypoint 最多的 frame
*/
#include <iostream>

int main()
{
    double confidence[3][4]{
        {0.9,0.8,0.3,0.7},
        {0.4,0.6,0.2,0.9},
        {0.8,0.9,0.7,0.6}
    };

    // TODO
    return 0;
}
