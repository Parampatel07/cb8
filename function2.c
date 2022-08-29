// write a programe to create function with argument without return
// write a programe to peform addition
#include<stdio.h>
void GetAdd(int a,int b)
{
    int answer;
    answer=a+b;
    printf("Answer is %d",answer);
}
void main()
{
    int num1,num2;
    printf("Enter value for num1");
    scanf("%d",&num1);
    printf("Enter value for num2");
    scanf("%d",&num2);
    GetAdd(num1,num2);
}