#include <stdio.h>
void main()
{
    // Write a program to enter any number and find out wether the number is Palindrome o not.
    int num, org, sum, rem;

    printf("Enter any three digit number\n");
    scanf("%d", &num);

    org = num;
    rem = num % 10;
    sum = rem * 100;

    num = num / 10;
    rem = num % 10;
    sum = sum + rem * 10;

    num = num / 10;
    sum = sum + num;

    if (org == sum)
    {
        printf("This is Palindrome number");
    }
    else
    {
        printf("This is not Palindrome number");
    }
}