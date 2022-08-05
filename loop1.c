// write a programe to print 1 to 1000 numbers
#include <stdio.h>
void main()
{
    int number = 1;

    printf("%d ", number);
    while(number<1000)
    {
        number = number + 1;
        printf("%d ", number);
    }
}