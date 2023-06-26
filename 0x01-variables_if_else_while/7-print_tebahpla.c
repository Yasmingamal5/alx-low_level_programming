#include <stdio.h>

/**
 * main	- prints the lwoercase alphabet in reverse.
 * followed by new line
 * Return: Always 0 (success)
 */
int main(voide)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
