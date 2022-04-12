#include "main.h"

/**
 * print_sign - prints a number's sign.
 * @n: The number of which the sign be printed.
 *
 * Return: 1 if the number is greater than 0,
 *         0 if the number is 0,
 *         -1 if the number is less than 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
