// write a program to print following series (triangular numbers)
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
// 1  2  3  4   5   6   7   8
#include <stdio.h>
void main()
{
    int number = 1, temp = 4, answer;
    printf("%d ", number);
    answer = number + temp;
    for (temp = 7; answer < 1000; temp = temp + 3)
    {
        printf("%d ", answer);
        // temp = temp + 3;
        answer = answer + temp;
    }
}
