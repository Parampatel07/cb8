// write a programe to findout bmi of user using function
#include<stdio.h>
//using with argument and with retrun
int foottoinch(int foot)
{
    int totalinch=foot*12;

    return totalinch;
}
//using with argument and with retrun
int totalinch(int a,int inch)
{
    int totalinch=inch+a;

    return totalinch;
}
float totalmeter(int a)
{
    float meter=a/39.37;
    // printf("the value of meter %f",)
    return meter;
}
//using with argument and with retrun
float getbmi(float a,int weight)
{
    float bmi=weight/(a*a);
    printf("The value of bmi is %f",bmi);
    return bmi;
}
void main()
{
    int weight,foot,inch,answer;
    float bmi,meter;
    printf("Enter value of weight");
    scanf("%d",&weight);
    printf("Enter your height in foot");
    scanf("%d",&foot);
    printf("Enter your heigth in inch");
    scanf("%d",&inch);

    answer=foottoinch(foot);
    answer=totalinch(answer,inch);
    meter=totalmeter(answer);
    printf("value of answer is %f",meter);
    bmi=getbmi(meter,weight);


}