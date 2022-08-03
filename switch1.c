// write a programe to findout whether t6he given letter is vowel or not using switch case
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter any one letter ");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
        printf("it is vowel");
        break;
        case 'e':
        printf("it is vowel");
        break;
        case 'i':
        printf("it is vowel");
        break;
        case 'o':
        printf("it is vowel");
        break;
        case 'u':
        printf("it is vowel");
        break;
        default:
        printf("it is not vowel");
        break;
    }
    printf("\nGoodbyee..");
}