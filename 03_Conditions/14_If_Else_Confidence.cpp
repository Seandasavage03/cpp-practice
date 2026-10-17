/*
[1] if / else

confidence = 0.72
threshold = 0.5

>= threshold -> Accepted
否則 -> Rejected
*/
#include <iostream>

int main()
{
    double confidence{0.72};
    double threshold{0.5};

    if (confidence >= threshold)
    {
        std::cout << "Accepted";
    }
    else
    {
        std::cout << "Rejected";
    }
    return 0;
}
