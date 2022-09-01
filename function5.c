// write a programe to peform addition using functions 
// using with argument with return function
#include<stdio.h>
int Getadd(int a,int b)
{
    int answer;
    answer=a+b;
    return answer;
}
void main()
{
    int num1,num2,result;
    printf("Enter value of num1");
    scanf("%d",&num1);
    printf("Enter value of num2");
    scanf("%d",&num2);
    result=Getadd(num1,num2);
    printf("result is %d ",result);
}