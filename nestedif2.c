// write a program to findout largest triangle from 3 triangle using base and height given by user
#include <stdio.h>
void main()
{
    int height1, base1, height2, base2, height3, base3, area1, area2, area3;

    printf("Enter value for height of triagnle 1");
    scanf("%d", &height1);
    printf("Enter value for height of triagnle 2");
    scanf("%d", &height2);
    printf("Enter value for height of triagnle 3");
    scanf("%d", &height3);
    printf("Enter value for base of triangle 1");
    scanf("%d", &base1);
    printf("Enter value for base of triagnle 2");
    scanf("%d", &base2);
    printf("Enter value for base of triagnle 3");
    scanf("%d", &base3);

    area1 = height1 * base1 / 2;
    area2 = height2 * base2 / 2;
    area3 = height3 * base3 / 2;

    printf("\nArea 1 is %d", area1);
    printf("\nArea 2 is %d", area2);
    printf("\nArea 3 is %d", area3);

    if (height1 > 0 && height2 > 0 && height3 > 0 && base1 > 0 && base2 > 0 && base3 > 0)
    {
        if (area1 == area2 && area2 == area3)
        {
            printf("\nall are same");
        }
        else
        {
            if (area1 > area2)
            {
                if (area1 > area3)
                {
                    printf("\narea 1 is greater");
                }
                else
                {
                    printf("\narea 3 is greater");
                }
            }
            else
            {
                if (area2 > area3)
                {
                    printf("\narea 2 is greater");
                }
                else
                {
                    printf("\narea 3 is greater");
                }
            }
        }
    }
    else
    {
        printf("Invalid input");
    }
    printf("Goodbyee.");
}