#include <stdio.h>

// Write a programme to enter any 4 digits number and find out the sum of its digits.

void main()
{
    int n, rem, sum;

    printf("Enter 4 digits number\n");
    scanf("%d", &n);

    rem = n % 10;
    sum = rem;

    n = n / 10;
    rem = n % 10;
    sum = sum + rem;

    n = n / 10;
    rem = n % 10;
    sum = sum + rem;

    n = n / 10;
    sum = sum + n;

    printf("sum of digits = %d", sum);
}