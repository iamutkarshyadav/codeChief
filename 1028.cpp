/*
Write a program to obtain 2 numbers
(
(
�
A
�
�
�
and
�
B
)
) and an arithmetic operator
(
�
)
(C) and then design a
�
�
�
�
�
�
�
�
�
�
calculator depending upon the operator entered by the user.

So for example if C="+", you have to sum the two numbers.

If C="-", you have to subtract the two numbers.

If C=" * ", you have to print the product.

If C=" / ", you have to divide the two numbers.

###Input:

First line will contain the first number
�
A.
Second line will contain the second number
�
B.
Third line will contain the operator
�
C, that is to be performed on A and B.
###Output: Output a single line containing the answer, obtained by, performing the operator on the numbers. Your output will be considered to be correct if the difference between your output and the actual answer is not more than
1
0
−
6
10
−6
 .
*/
#include <iostream>
#include <iomanip> 

int main()
{
    double A, B;
    char C;

    std::cin >> A >> B >> C;

    double result;

    switch (C)
    {
    case '+':
        result = A + B;
        break;
    case '-':
        result = A - B;
        break;
    case '*':
        result = A * B;
        break;
    case '/':
        result = A / B;
        break;
    default:
        std::cerr << "Invalid operator" << std::endl;
        return 1;
    }

    std::cout << std::fixed << std::setprecision(6) << result << std::endl;

    return 0;
}
