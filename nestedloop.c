// write a programe to print half inverted pyramid
#include <stdio.h>
void main()
{
    int row = 0,colum=5;
    while(colum>0)
    {
        while (row < colum)
        {
            printf("* ");
            row = row + 1;
        }
        printf("\n");
        row = 0;
        colum=colum-1;
    }
}