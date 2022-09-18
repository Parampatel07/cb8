// write a programe to peform swap without using third variable 
// ==> a=100,b=200;
// ==> a=200,b=100;
#include<stdio.h>
void main()
{
    int num1=0,num2;

    printf("Enter value of num1 ");
    scanf("%d",&num1);
    printf("Enter value of num2 ");
    scanf("%d",&num2);
    printf("\nThe value of num1 %d and num2 %d ",num1,num2);
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("\n\nThe value after of num1 %d and num2 %d ",num1,num2);
}