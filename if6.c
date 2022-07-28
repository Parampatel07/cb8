// write a programe to find largest triagnle out of given three triangle take hieght and base as input
// and - &&
// or - ||
#include <stdio.h>
void main()
{
    int height, base, height1, base1, height2, base2, area, area1, area2,temp;

    printf("enter height of triagnle 1");
    scanf("%d", &height);
    printf("enter base of triangle 1");
    scanf("%d", &base);
    printf("Enter height of triangle 2");
    scanf("%d", &height1);
    printf("Enter base of triagnle 2");
    scanf("%d", &base1);
    printf("Enter height of triangle 3");
    scanf("%d", &height2);
    printf("Enter base of triagnle 3");
    scanf("%d", &base2);

    printf("\nthe value of 1 triangle height is %d and base is %d", height, base);
    printf("\nthe value of 2 triangle height is %d and base is %d", height1, base1);
    printf("\nthe value of 3 triangle height is %d and base is %d", height2, base2);

    area = height * base / 2;
    area1 = height1 * base1 / 2;
    area2 = height2 * base2 / 2;

    printf("\narea 1 is %d",area);  
    printf("\narea 2 is %d",area1);
    printf("\narea 3 is %d",area2);

    if (area>area1 && area>area2)
    {
        printf("\n1 is gretaer ");
    }
    if(area1>area && area1>area2)
    {
        printf("\n 2 is gretaer");
    }
    if (area2>area1 && area2>area)
    {
        printf("\n 3 is greater");
    }
    printf("Goodbyee..");   
}