// write a program to print following series (triangular numbers)
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
// 1  2  3  4   5   6   7   8
#include <stdio.h>
void main()
{
    int number = 0, temp = 4;
    // printf("%d ", number);
    // number = number + temp;
    for(temp=1 ; number<10000 ; temp=temp+4)
    {
        printf("%d ", number);
        number = number + temp;
    }
}
