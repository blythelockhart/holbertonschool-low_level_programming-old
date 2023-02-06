#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array of intergers
 * @n: The number of elemenets to be printed
 * Return: empty
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n-1))
{
printf(", ");
}
}
printf("\n");
}
