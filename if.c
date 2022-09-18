// write a programe to findout which month has less days accpet two months from user
#include <stdio.h>
// function
int Get_days(int a)
{
    int days;
    if (a == 2)
    {
        days = 28;
    }
    else
    {
        if (a <= 7)
        {

            if (a% 2 == 0)
            {
                days = 30;
            }
            else
            {
                days = 31;
            }
        }
        else
        {
            if (a % 2 != 0)
            {
                days = 30;
            }
            else
            {
                days = 31;
            }
        }
    }
    return days;
}
void main()
{
    int month1, month2, day1,day2;

    printf("Select your month 1");
    scanf("%d", &month1);
    printf("Select your month 2");
    scanf("%d", &month2);
    day1=Get_days(month1);
    day2=Get_days(month2);
    if(day1<day2)
    {
        printf("month 1 is lowest ");
    }
    else if(day2<day1)
    {
        printf("Month 2 is lowest");
    }
    else{
        printf("both are same");
    }
}