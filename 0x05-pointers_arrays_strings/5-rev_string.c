#include "main.h"


/**
 * rev_string - Reverse a string
 * @s: The string to be modified
 * Return: void
 * declare tmp before first use
 * assign a value to tmp
 */

void rev_string(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	char tmp;
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}
