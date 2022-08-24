// #write a programe to find 5 subject marks's average and sum
#include <stdio.h>
void main()
{
    int marks[5], count, sum, average, temp,flash;
    for (count = 0; count < 5; count++)
    {
        printf("Enter marks of subject %d ", count + 1);
        scanf("%d", &marks[count]);
    }
    sum = 0;
    for (count = 0; count < 5; count++)
    {
        sum = sum + marks[count];
    }
    printf("\n\n The sum of marks is %d", sum);
    average = sum / 5;
    printf("\n\nThe average of marks is %d", average);
    for(flash=0;flash<5;flash++)
    {
        count = flash;
        while (count < 5)
        {

            if (marks[flash] < marks[count])
            {
                temp = marks[flash];
                marks[flash] = marks[count];
                marks[count] = temp;
            }
            count++;
        }
    }
    // count=1;
    // while (count<5)
    // {

    //     if (marks[1] < marks[count])
    //     {
    //         temp = marks[1];
    //         marks[1] = marks[count];
    //         marks[count] = temp;
    //     }
    //     count++;
    // }
    // count=2;
    // while (count<5)
    // {
    //     if (marks[2] < marks[count])
    //     {
    //         temp = marks[2];
    //         marks[2] = marks[count];
    //         marks[count] = temp;
    //     }
    //     count++;
    // }
    // count=3;
    // while (count<5)
    // {

    //     if (marks[3] < marks[count])
    //     {
    //         temp = marks[3];
    //         marks[3] = marks[count];
    //         marks[count] = temp;
    //     }
    //     count++;
    // }
    // count=4;
    // while (count<5)
    // {

    //     if (marks[4] < marks[count])
    //     {
    //         temp = marks[4];
    //         marks[4] = marks[count];
    //         marks[count] = temp;
    //     }
    //     count++;
    // }
    for (count = 0; count < 5; count++)
        printf("\nMarks of subject %d is %d", count + 1, marks[count]);
}
