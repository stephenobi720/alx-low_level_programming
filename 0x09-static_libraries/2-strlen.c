#include "main.h"

/**
 *_strlen - return the lenght of the string
 *@s: string parameter input
 *Return: lenght of the string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
