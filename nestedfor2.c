// write a programe to print full pyramid
#include <stdio.h>
void main()
{
    int space = 10, row, colum, minus = 10;
    for (colum = 0; colum < 10; colum++)
    {
        for (space = minus; space > 0; space--)
        {
            printf(" ");
        }
        for (row = colum; row > 0; row--)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
        minus--;
    }
    for (space = 7; space > 0; space--)
    {
        printf("-");
    }
}