// write a programe to print half pyramid
#include <stdio.h>
void main()
{
    int a = 0,i=0;
    while (i<6)
    {
        while (a < i)
        {
            printf("* ");
            a = a + 1;
        }
        printf("\n");
        a=0;
        i=i+1;
    }
}