/*
Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses.

Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The only line of each test case contains two integers A and B denoting the maximum possible number of candies Limak can eat and the maximum possible number of candies Bob can eat respectively.

Output
For each test case, output a single line containing one string — the name of the winner ("Limak" or "Bob" without the quotes).
*/
#include <iostream>

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int A, B;
        std::cin >> A >> B;

        int limak_candies = 0;
        int bob_candies = 0;
        int round = 1;

        while (true)
        {
            if (round % 2 == 1)
            {
                if (limak_candies + round <= A)
                {
                    limak_candies += round;
                }
                else
                {
                    std::cout << "Bob" << std::endl;
                    break;
                }
            }
            else
            {
                if (bob_candies + round <= B)
                {
                    bob_candies += round;
                }
                else
                {
                    std::cout << "Limak" << std::endl;
                    break;
                }
            }

            round++;
        }
    }

    return 0;
}
