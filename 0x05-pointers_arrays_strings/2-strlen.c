#include <stdio.h>

/**
 * _strlen - Returns the lenght of a string
 * @str: The string to be measured
 * Return: The length of the string, @str
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
