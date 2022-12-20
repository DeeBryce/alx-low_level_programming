#include "main.h"

/**
 * _strcpy - copy the sting pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dst[a] = '\0';
	return (dest);
}
