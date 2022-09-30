#include "main.h"

/**
 * _strcat - concatenatess the sting pounted to by @src to
 * the end of the sting pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dets
 */

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
