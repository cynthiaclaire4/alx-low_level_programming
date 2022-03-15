#include <stdio>
#include "main.h"
/**
 * main - Entry point
 * Description: print _putchar
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
