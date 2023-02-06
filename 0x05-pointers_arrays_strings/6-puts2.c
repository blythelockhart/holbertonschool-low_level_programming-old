#include "main.h"

/**
 * puts2 - Prints every other chartacter of a string
 * @str: the string to be treated
 * Return: empty
 */
void puts2(char *str)
{
int i;
int j = 0;
while (str[j] != '\0')
{
j++;
}
for (1 = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
