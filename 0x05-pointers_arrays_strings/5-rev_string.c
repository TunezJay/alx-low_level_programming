#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int r = 0;
	int i;

	while (s[r] != '\0')
		r++;
	for (i = 0; i < r; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[r];
		s[r] = rev;
	}
}
