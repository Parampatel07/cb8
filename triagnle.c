// write a programe to print half inverted pyramid
#include <stdio.h>
void main()
{
    int row = 0,colum=5;
    do
    {
        do
        {
            if(row%2==0)
                printf("1 ");
            else
                printf("0 ");
            row = row + 1;
        }while (row < colum);
        printf("\n");
        row = 0;
        colum=colum-1;
    }while(colum>0);
}