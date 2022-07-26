//write a programe to find cube of positive number
#include<stdio.h>
void main()
{
    int number,answer;

    printf("enter value for number ");
    scanf("%d",&number);

    // printf("Value of number is %d",number);
    if(number>0)
    {
        answer=number*number*number;
        printf("The qube of number is %d",answer);
    }
    printf("\nGoodbyee..");
}