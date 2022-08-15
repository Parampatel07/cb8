// Write a C program to count number of digits in a number.
// ->45266 ->5
#include<stdio.h>
void main()
{
    int number,answer;
    
    printf("Enter your number");
    scanf("%d",&number);

    number=45565;

    answer=number/10;
    printf("%d ",answer);
    answer=answer%10;
    printf("%d ",answer);
    
}
