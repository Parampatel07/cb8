// write a programe to findout area of circle using function
//function without argument with return
#include<stdio.h>
int areaOfcircle()
{
    int radius,answer;
    // float pi=3.14;
    printf("Enter value of radius ");
    scanf("%d",&radius);

    answer=3.14159*(radius*radius);

    return answer;
}
void main()
{
    int answer;

    answer=areaOfcircle();
    printf("Value of answer is %d",answer);
}