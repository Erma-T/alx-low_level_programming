#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lch, uch;

	lch = 'a';
	uch = 'A';
	
	while (lch <= 'z')
	{
		putchar(lch);
		lch += 1;
	}
	while (uch <= 'Z')
	{
		putchar(uch);
		uch += 1;
	}
	putchar('\n');

	return (0);
}
