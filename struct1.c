//write a programe to take input of 3 countries time accpet hours in int minutes and second in float and countries first letter in char 
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hour;
    float minutes;
    char country;
}t2,t3;
void main()
{
    struct time t1;

    printf("Enter value for country 1\n");
    printf("Enter hours ");
    scanf("%d",&t1.hour);
    printf("Enter mintues and seconds");
    scanf("%f",&t1.minutes);
    fflush(stdin);
    printf("Enter first letter of your country ");
    scanf("%c",&t1.country);
    printf("the hour are %d, mintues area %f, first letter is %c",t1.hour,t1.minutes,t1.country);
}