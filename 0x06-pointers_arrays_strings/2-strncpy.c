#include "main.h"
/**
 * *_strncpy - C function that copies a string, includin the
 * terminanting null byte, using at most an inputted number of bytes.
 * if the length of the source dtring s less than the maximu byte number,
 * the remainder of the destination string is fille with null bytes.
 * works identically to the standard library function 'strncpy'.
 * @dest: buffer storing the string copy
 * @src: the source sting
 * @n: max number of byte copied
 * return: value of string1
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
