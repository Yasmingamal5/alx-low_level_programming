#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" -Dora korpar, 2015-10-19\n";
	intel len = strlen(str);
	fwrite(str, sizeof(char), len, stderr);
	return 1;
}

