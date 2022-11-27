#include <stdio.h>
void main()
{
    // Write a program to enter any three digit number and find out wether the number armstrong or not.
    int num, org, sum, rem;

    printf("Enter any three digit number\n");
    scanf("%d", &num);

    org = num;
    rem = num % 10;
    sum = rem * rem * rem;

    num = num / 10;
    rem = num % 10;
    sum = rem * rem * rem + sum;

    num = num / 10;
    sum = num * num * num + sum;

    if (org == sum)
    {
        printf("This is Armstrong number");
    }
    else
    {
        printf("This is not Armstrong number");
    }
}