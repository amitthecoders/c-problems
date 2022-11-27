#include <stdio.h>

/* Ramesh basic salary in input through the keyboard.
   Write a programmeto find out his gross salary.
   When his DA(Dearness allounce) is 20% of basic salary.
   HRA(House rent allounce) is 40% of basic salary.
*/

void main()
{

    int gs, da, hra, bs;

    printf("Enter basic salary of person");
    scanf("%d", &bs);

    da = 20 / 100 * bs;
    hra = 40 / 100 * bs;
    gs = bs + da + hra;

    printf("Gross salary of person %d", gs);
}