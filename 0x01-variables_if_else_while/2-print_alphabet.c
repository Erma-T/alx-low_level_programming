#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch += 1;
	}
	putchar('\n');

	return (0);
}
