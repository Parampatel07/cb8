// Write a c program to calculate income tax, gross income, net income from monthly income given by user 

// yearly income     tax rate
// <3,00,000         5%  

// >=3,00,000        10%  

// >=5,00,000        20%

// >=8,00,000        30%  
#include<stdio.h>
void main()
{
    int monthly,yearly,tax,netincome;


    printf("Enter your monthly income ");
    scanf("%d",&monthly);

    // printf("your monthly income is %d",monthly);

    yearly=monthly*12;
    // printf("\nyour yearly income is %d",yearly);

    if(yearly<=300000)
    {
        tax=yearly*5/100;
    }
    else if(yearly>300000 && yearly<=500000)
    {
        tax=yearly*10/100;
    }
    else if(yearly>500000 && yearly<=800000)
    {
        tax=yearly*20/100;
    }
    else
    {
        tax=yearly*30/100;
    }
    // printf("\ntax is %d",tax);

    netincome=yearly-tax;
    printf("\n Net income is %d",netincome);
}