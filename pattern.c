// write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 7000
#include <stdio.h>
void main()
{
    int first = 2, second = 1, answer,count;

    answer = first + second;
    for(count=0;count<10;count++)
    {
        first = answer;
        answer = answer + second;
        printf(" %d ", answer);
        second = answer;
        answer = answer + first;
        printf(" %d ", answer);
    }
}