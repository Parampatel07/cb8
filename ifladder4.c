// 13) write a programe to print number in words only 2 digit number
// 10-> one zero
// 56-> five six
#include <stdio.h>
void main()
{
    int number, first, second;
    // int one=1,two=2,three=3,four=4,five=5,six=6,seven=7,eight=8,nine=9,zero=0;
    // int one2=1,two2=2,three2=3,four2=4,five2=5,six2=6,seven2=7,eight2=8,nine2=9,zero2=0;
    printf("Enter your number");
    scanf("%d", &number);
    first = number / 10;
    second = number % 10;
    // printf("first is %d ",first);
    // printf("Second is %d ",second);
    if (number > 9 && number < 100)
    {
        if (first == 1)
            printf("One ");
        else if (first == 2)
            printf("two ");
        else if (first == 3)
            printf("three ");
        else if (first == 4)
            printf("four ");
        else if (first == 5)
            printf("five ");
        else if (first == 6)
            printf("six ");
        else if (first == 7)
            printf("seven ");
        if (second == 1)
            printf("One ");
        else if (second == 2)
            printf("two ");
        else if (second == 3)
            printf("three ");
        else if (second == 4)
            printf("four ");
        else if (second == 5)
            printf("five ");
        else if (second == 6)
            printf("six ");
        else if (second == 7)
            printf("seven ");
    }
    else
    {
        printf("Enter a valid number ");
    }
}