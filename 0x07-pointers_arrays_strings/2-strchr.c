#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to first letter in string
 * @c: character being searched for
 * Return: pointer to first occurance of character
 * when not found returns NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int  i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	return (&(s[i]));
}