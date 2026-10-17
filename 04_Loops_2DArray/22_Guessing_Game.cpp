/*
[3] Guessing Game

secret = 7
最多猜 3 次。

猜中 -> You win!
三次沒中 -> You lose!

加分：
Too high / Too low
*/
#include <iostream>

int main()
{
    int secretNumber{7};
    int guess{};
    int guess_count{0};
    int guess_limit{3};
    bool loose{false};

    while (secretNumber != guess && loose == false)
    {
        if (guess_count < guess_limit)
        {
            std::cout << "Please guess a number: ";
            std::cin >> guess;
            guess_count++;
            
            if (guess > secretNumber)
            {
                std::cout << "Too high!" << '\n';
            }
            else if (guess < secretNumber)
            {
                std::cout << "Too low!" << '\n';
            }
        }
        else
        {
            loose = true;
        }
    }

    if (loose == true)
    {
        std::cout << "You lose!";
    }
    else
    {
        std::cout << "You win!";
    }

    return 0;
}
