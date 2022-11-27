#include <stdio.h>

/* Write a programme to enter the length and breadth of reactangle
   and find out area and preimeter of rectangle.
*/

void main()
{
    int l, b, p, a;

    printf("Enter the length of rectangle\n");
    scanf("%d", &l);

    printf("Enter the breath of rectangle\n");
    scanf("%d", &b);

    p = 2 * l + 2 * b;
    printf("Perimeter = %d", p);

    a = l * b;
    printf("\nArea = %d", a);
    
}