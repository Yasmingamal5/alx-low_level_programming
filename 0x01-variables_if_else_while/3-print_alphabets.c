#include <stdio.h>

/**
 * main	- prints the alphabets.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char alp[52] = "abcdefghijkLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
