// do
// {

// }while(condition)
// write a programe to find power and exponent
#include <stdio.h>
void main()
{
    int power, base, exponent=1,count = 0;
    printf("Enter your base ");
    scanf("%d", &base);
    printf("Enter your power ");
    scanf("%d", &power);
    // base = 7;
    // power = 6;
    do
    {
        exponent = exponent* base;
        count++;
    } while (count < power);
    printf("answer is %d", exponent);
}