// write a prorame to make calculator
// ->modulas
// ->minimum
// ->maximum
// ->equality
#include <stdio.h>
void main()
{
    int number1, number2, choice, answer;

    printf("Enter number 1");
    scanf("%d", &number1);
    printf("Enter number 2");
    scanf("%d", &number2);

    printf("Enter 1 for moduls \n Enter 2 for minimum \n ENter 3 for maximum \n Enter 4 for eqaulity\n Select any one");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        answer = number1 % number2;
        printf("\nAnswer is %d", answer);
        break;

    case 2:
        if (number1 < number2)
        {
            printf("\nnum1 is min");
        }
        else
            printf("\nnum2 is min");
        break;

    case 3:
        if (number1 > number2)
            printf("\nnum1 is max");
        else
            printf("\nnum2 is max");
        break;

    case 4:
        if (number1 == number2)
            printf("both are equal");
        else
            printf("both are not equal");
        break;

    default:
        printf("invalid choise");
        break;
    }
}