#include <stdio.h>
/**
 *main - entry point where a program starting
 *
 *Return: Value 0 Success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);

		c++;
	}
	putchar('\n');

	return (0);
}
