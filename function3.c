//write a program to find wheter the given number is odd or even using function
#include<stdio.h>
void oddeven(int abc)
{
    if(abc%2==0)
    {
        printf("This number is even");
    }
    else
    {
        printf("This number is odd");
    }
}
void main()
{
    int number;

    printf("Enter any number");
    scanf("%d",&number);    
    oddeven(number);
}