#include <stdio.h>

/* Write a programme to enter the amount and then find out the 
   minimum number of currencies to be dispensed.
*/

void main()
{
    int n, m, curr;

    printf("Enter your amount\n");
    scanf("%d", &n);

    m = n / 2000;
    curr = m;

    n = n - m * 2000;
    m = n / 500;
    curr = curr + m;

    n = n - m * 500;
    m = n / 200;
    curr = curr + m;

    n = n - m * 200;
    m = n / 100;
    curr = curr + m;

    n = n - m * 100;
    m = n / 50;
    curr = curr + m;

    n = n - m * 50;
    m = n / 20;
    curr = curr + m;

    n = n - m * 20;
    m = n / 10;
    curr = curr + m;

    n = n - m * 10;
    m = n / 5;
    curr = curr + m;

    n = n - m * 5;
    m = n / 2;
    curr = curr + m;

    n = n - m * 2;
    curr = curr + n;

    printf("Total number of currencies = %d", curr);
    
}