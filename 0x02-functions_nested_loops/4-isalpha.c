#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: Character to be checked.
 *
 * Return: 1 if input is letter, lowercase, or uppercase, 0 if otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
