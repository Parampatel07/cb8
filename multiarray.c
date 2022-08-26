// write a programe to of multiarray to find average and sum of 5 students for 5 subject
#include <stdio.h>
void main()
{
    int students[5][5], count, flash, sum[5],average;
    for (flash = 0; flash < 5; flash++)
    {
        printf("\nEnter marks for student %d", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nEnter marks of subject %d ", count + 1);
            scanf("%d", &students[flash][count]);
        }
    }
    for (flash = 0; flash < 5; flash++)
    {
        printf("\nMarks of student %d are as below :-", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nsubject %d - %d", count + 1, students[flash][count]);
        }
    }
    for (flash = 0; flash < 5; flash++)
    {
        sum[flash] = 0;
        for (count = 0; count < 5; count++)
            sum[flash] = sum[flash] + students[flash][count];
        printf("\ntotal of %d student is %d ",flash+1,sum[flash]);
    }
    average=(sum[0]+sum[1]+sum[2]+sum[3]+sum[4])/5;
    printf("\n\n average %d",average);
    printf("\nGoodbyee..");
}