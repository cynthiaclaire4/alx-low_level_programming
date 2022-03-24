#include "main.h"
/**
 * *_strcat - appends string and then adds a terminating null byte
 * @dest: willtake the value
 * @src: will be appended to dest
 * at the end of dest, and then adds a terminating null byte
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
