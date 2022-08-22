// write a programe to print square
#include <stdio.h>
void main()
{
    int count = 0, flash = 0;
    do
    {
        printf("1 ");
        count++;
    } while (count < 5);
    // printf("\n");
    count = 0;
    do
    {
        printf("\n");
        printf("1 ");
        do
        {
            printf("  ");
            flash++;
        } while (flash < 3);
        printf("1 ");
        count++;
        flash = 0;
    } while (count < 3);
    count = 0;
    printf("\n");
    do
    {
        printf("1 ");
        count++;
    } while (count < 5);
    // printf("\n");
    count = 0;
}