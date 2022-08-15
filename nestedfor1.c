// hollow half invetred pyramid
#include <stdio.h>
void main()
{
    int space = 5, row = 0;
    for (row = 0; row < 7; row++)
    {
        printf("*");
    }
    printf("\n");
    printf("*");
    for(row=4;row>0;row--)
    {
        for (space = row; space > 0; space--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
        printf("*");
    }
}