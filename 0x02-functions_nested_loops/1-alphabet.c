#include "main.h"
/**
 * print_alphabet  Description; print alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		-putchar(ch);
		ch++;
	}

	_putchar('\n');
}

