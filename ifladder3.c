// write a programe to find out which month user has entered  - via zodiac sign
#include <stdio.h>
void main()
{
    int month;
    printf("Enter your month number");
    scanf("%d", &month);
    if (month == 1)
    {
        printf("jan");
    }
    else if (month == 2)
    {
        printf("feb");
    }
    else if (month == 3)
    {
        printf("march");
    }
    else if (month == 4)
    {
        printf("apr");
    }
    else if (month == 5)
    {
        printf("may");
    }
    else if (month == 6)
    {
        printf("june");
    }
    else if (month == 7)
    {
        printf("july");
    }
    else if (month == 8)
    {
        printf("aug");
    }
    else if (month == 9)
    {
        printf("sep");
    }
    else if (month == 10)
    {
        printf("oct");
    }
    else if (month == 11)
    {
        printf("nov");
    }
    else if (month == 12)
    {
        printf("dec");
    }
    else
    {
        printf("invalid month");
    }
}