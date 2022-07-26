// write a program to findout whether given shape(length & width) is square or not
#include <stdio.h>
void main()
{
    int length, width;

    printf("Enter the value of lenght ");
    scanf("%d", &length);

    printf("Enter the value of widht ");
    scanf("%d", &width);

    printf("The value of lenght is %d and widht is %d\n", length, width);

    if (length == width)
    {
        printf("it is square\n");
    }
    else
    {
        printf("this is not sqaure\n");
    }

    printf("GOodbyee..\n");
}