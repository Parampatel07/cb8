// #example of array
#include <stdio.h>
void main()
{
    // creating a array
    int number[5], count;
    for (count = 0; count < 5; count++)
    {
        printf("Enter number %d", count + 1);
        scanf("%d", &number[count]);
    }
    for(count=0;count<5;count++)
    {
        printf("\nthe value of number %d is %d",count+1,number[count]);
    }
}