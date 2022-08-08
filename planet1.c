// write a programe to find distance between 2 planets
#include <stdio.h>
void main()
{
    int planet1, planet2;
    long long int one = 57900000, two = 108200000, three = 149600000, four = 227900000, five = 778600000, six = 1433500000, seven = 2872500000, eight = 4495100000, answer;

    printf("Select planet 1 ");
    printf("\nEnter 1 for Mercury");
    printf("\nEnter 2 for Venus");
    printf("\nEnter 3 for Earth");
    printf("\nEnter 4 for Mars");
    printf("\nEnter 5 for Jupiter");
    printf("\nEnter 6 for Saturn");
    printf("\nEnter 7 for Uranus");
    printf("\nEnter 8 for Neptune");
    scanf("%d", &planet1);
    printf("Select planet 2 ");
    printf("\nEnter 1 for Mercury");
    printf("\nEnter 2 for Venus");
    printf("\nEnter 3 for Earth");
    printf("\nEnter 4 for Mars");
    printf("\nEnter 5 for Jupiter");
    printf("\nEnter 6 for Saturn");
    printf("\nEnter 7 for Uranus");
    printf("\nEnter 8 for Neptune");
    scanf("%d", &planet2);

    // planet1 = 1;
    // planet2 = 2;

    // printf("%lld ",eight);
    if (planet1 == 1)
    {
        if (planet2 == 2)
        {
            answer = one - two;
        }
        else if (planet2 == 3)
        {
            answer = one - three;
        }
        else if (planet2 == 4)
        {
            answer = one - four;
        }
        else if (planet2 == 5)
        {
            answer = one - five;
        }
        else if (planet2 == 6)
        {
            answer = one - six;
        }
        else if (planet2 == 7)
        {
            answer = one - seven;
        }
        else if (planet2 == 8)
        {
            answer = one - eight;
        }
    }
    if (planet1 == 2)
    {
        if (planet2 == 1)
        {
            answer = two - one;
        }
        else if (planet2 == 3)
        {
            answer = two - three;
        }
        else if (planet2 == 4)
        {
            answer = two - four;
        }
        else if (planet2 == 5)
        {
            answer = two - five;
        }
        else if (planet2 == 6)
        {
            answer = two - six;
        }
        else if (planet2 == 7)
        {
            answer = two - seven;
        }
        else if (planet2 == 8)
        {
            answer = two - eight;
        }
    }
    
    if (answer < 0)
    {
        answer = answer * -1;
    }
    printf("Disctacne between two planet is %lld ", answer);
}