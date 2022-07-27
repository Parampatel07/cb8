// write a program to accept one letter from user. if letter is A then print message "it is first letter of abcd".
// and - &&
// or - ||
#include<stdio.h>
void main()
{
    char letter;

    printf("Enter the value of letter ");
    scanf("%c",&letter);

    if(letter=='A' || letter=='a')
    {
        printf("it is first letter of abcd");
    }
    else
    {
        printf("it is not first letter of abcd");
    }

    printf("\ngoodbyee..");
}