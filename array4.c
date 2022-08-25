// write a programe to take name as an input
#include <stdio.h>
void main()
{
    char name[5], count;
    printf("Enter your own name ");
    for (count = 0; count < 5; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
    }
    for (count = 0; count < 5; count++)
    {
        printf("%c", name[count]);
        if (name[count]=='\n')
        {
            break;
        }
    }
    printf("\n");
    for(count=4;count>=0;count--)
        printf("%c",name[count]);
    
}