// write a programe to store 3 student marks,name,weight using struct
#include <stdio.h>
#include <stdlib.h>
struct students
{
    int mark;
    char name[25];
    float weight;
} s2;
void main()
{
    struct students s1;
    int count = 0,temp;
    while (count < 3)
    {
        printf("\nEnter the value of student %d",count+1);
        printf("\nEnter the value of marks ");
        scanf("%d", &temp);
        fflush(stdin);
        printf("Enter the value of name");
        scanf("%s", &s1.name);
        fflush(stdin);
        printf("Enter the value of weight ");
        scanf("%f", &s1.weight);
        printf("\nthe name of student 1 is %s,marks of same is %d and wieght is %.2f", s1.name,temp, s1.weight);
        count++;
    }
}