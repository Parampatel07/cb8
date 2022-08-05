// write a programe to print 1 to 500 even numbers
#include <stdio.h>
void main()
{
    int number = 2;
    while(number<=500)
    {
        printf("%d \t", number);
        number = number + 2;
    }
}