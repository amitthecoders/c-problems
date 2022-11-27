#include <stdio.h>

// Write a programme to input any number and find its reverse order of these 4 digits number.

void main()
{
    int n, r, a, b, c, d, t;

    printf("Enter any 4 digits number\n");
    scanf("%d", &n);

    r = n / 1000;
    a = r;

    n = n % 1000;
    r = n / 100;
    b = r * 10;

    n = n % 100;
    r = n / 10;
    c = r * 100;

    n = n % 10;
    d = n * 1000;

    t = d + c + b + a;

    printf("Reverse number = %d", t);
}