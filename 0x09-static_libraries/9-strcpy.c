#include "main.h"

/**
 *_strcpy - cpy any tring pointed to src
 *@src: pointer
 *@dest: another pointer
 *Return: the dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, lenght;

	for (lenght = 0; src[lenght] != '\0'; lenght++)
	{

	}
	for (i = 0; i <= lenght; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
