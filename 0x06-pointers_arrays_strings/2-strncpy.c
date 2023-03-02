#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: surce.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = '\0';

	return (dest);
}
