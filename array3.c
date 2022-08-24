// write a programe to take name as an input
#include <stdio.h>
void main()
{
    char name[25], count;

    printf("Enter your own name ");
    for (count = 0; count < 25; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
    }
    for (count = 0; count < 25; count++)
    {
        printf("%c", name[count]);
        if (name[count]=='\n')
        {
            break;
        }
    }
}