// #write a programe to find 5 subject marks's average and sum
#include <stdio.h>
void main()
{
    int marks[5], count, sum,average;
    for (count = 0; count < 5; count++)
    {
        printf("Enter marks of subject %d ", count + 1);
        scanf("%d", &marks[count]);
    }
    for (count = 0; count < 5; count++)
        printf("\nMarks of subject %d is %d", count + 1, marks[count]);

    sum = 0;
    for (count = 0; count < 5; count++)
    {
        sum = sum + marks[count];
    }
    printf("\n\n The sum of marks is %d", sum);
    average=sum/5;
    printf("\n\nThe average of marks is %d",average);
}