#include<stdio.h>
#include<stdlib.h>
void main()
{
    int number;
    float num1;
    char letter;
    printf("Enter value for number");
    scanf("%d",&number);
    printf("the value of number is %d\n",number);
    
    fflush(stdin);
    printf("Enter value for char");
    scanf("%c",&letter);
    printf("the value of letter is %c\n",letter);
    
    printf("Enter value for float");
    scanf("%f",&num1);
    printf("the value of num1 is %f \n",num1);
}