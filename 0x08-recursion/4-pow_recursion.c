#include "main.h"

/**
 * _pow_recursion - Returns the value of x 
 * raised to the y power
 * @x: The value to multiply
 * @y: The exponent value 
 * Return: the value multiplied y times
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
