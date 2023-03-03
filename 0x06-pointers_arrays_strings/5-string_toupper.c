#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @s: string to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s)
{
	int index;

	for (i = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
	}
	return (s);
}
