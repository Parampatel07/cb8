// write a programe to findout how many days a month has
#include <stdio.h>
void main()
{
    int month;

    printf("Enter your month");
    scanf("%d", &month);

    if (month > 0 && month < 12)
    {

        if (month == 2)
        {
            printf("month has 28/29 days");
        }
        else
        {
            if (month <= 7)
            {

                if (month % 2 == 0)
                {
                    printf("month has 30 days");
                }
                else
                {
                    printf("month has 31 days");
                }
            }
            else
            {

                if (month % 2 == 0)
                {
                    printf("month has 31 days");
                }
                else
                {
                    printf("month has 30 days");
                }
            }
        }
    }
    else
    {
        printf("invalid input");
    }
    printf("\nGoodbyee..");
}