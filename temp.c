// zodiac sign
#include <stdio.h>
void main()
{
    int m, day;
    printf("enter your month ");
    scanf("%d", &m);
    printf("your month is %d\n", m);
    printf("enter your day ");
    scanf("%d", &day);
    printf("your day is %d\n", day);
    if ((m == 2) && (day >= 29 || day < 0))
    {
        printf("invalid input");
    }
    else
    {
        if (day < 0)
        {
            printf("invalid input");
        }
        else
        {
            if (m > 0 && m < 12)
            {
                if (m==4 && )
                {
                    /* code */
                }
                

                if ((m == 12 && day >= 22) || (m == 1 && day <= 19))
                    printf("your zodiac sign is CAPRICRN and your symbol is THE GOAT");
                else if ((m == 1 && day >= 20) || (m == 2 && day <= 18))
                    printf("your zodiac sign is AQUARIUS and your symbol is THE WATER BEARER");
                else if ((m == 2 && day >= 19) || (m == 3 && day <= 20))
                    printf("your zodiac sign is PISCES and your symbol is THE FISHES");
                else if ((m == 3 && day >= 21) || (m == 4 && day <= 19))
                    printf("your zodiac sign is ARIES and your symbol is THE RAM");
                else if ((m == 4 && day >= 22) || (m == 5 && day <= 20))
                    printf("your zodiac sign is TAURUS and your symbol is THE BULL");
                else if ((m == 5 && day >= 21) || (m == 6 && day <= 20))
                    printf("your zodiac sign is GEMINI and your symbol is THE TWINS");
                else if ((m == 6 && day >= 21) || (m == 7 && day <= 22))
                    printf("your zodiac sign is CANCER and your symbol is THE CRAB");
                else if ((m == 7 && day >= 23) || (m == 8 && day <= 22))
                    printf("your zodiac sign is LEO and your symbol is THE LION");
                else if ((m == 8 && day >= 23) || (m == 9 && day <= 22))
                    printf("your zodiac sign is VIRGO and your symbol is THE VIRGIN");
                else if ((m == 9 && day >= 23) || (m == 10 && day <= 22))
                    printf("your zodiac sign is LIBRA and your symbol is THE SCALES");
                else if ((m == 10 && day >= 23) || (m == 11 && day <= 21))
                    printf("your zodiac sign is SCORPIO and your symbol is THE SCORPION");
                else if ((m == 11 && day >= 22) || (m == 12 && day <= 21))
                    printf("your zodiac sign is SAGITTARIUS and your symbol is THE ARCHER");
                else
                    printf("ENTER VALID BIRTHDAY!!\nGOODBYE..");
            }
            else
            {
                printf("invalid input");
            }
        }
    }
}