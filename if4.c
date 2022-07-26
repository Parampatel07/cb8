// write a program to display "it is milinium year message " if give year is diviable by 1000
#include <stdio.h>
void main()
{
    int year, result;

    printf("Enter a year ");
    scanf("%d", &year);

    // printf("The year given is %d", year);

    result = year % 1000;
    if (result == 0)
    {
        printf("this is millinium year");
    }
    else
    {
        printf("this is not millinium year");
    }

    printf("\nGoodbyee..");
}