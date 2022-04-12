#include "main.h"

/**
 * _islower - Confirms whether a character is lowercase
 * @c: The character to be checked.
 *
 * Retrun: 1 if character is lowercase, 0 if uppercase.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
