#include <stdio.h>
/**
 *  *main - print the alphabet in lowercase and upper
 *   *
 *    *Description:Will print out the entire alphabet in lowercase,then inupper
 *     *Return: 0
 *
 */
int main(void)
{
		char a = 'a';
		char z = 'A';

		while (a <= 'z')
	{
		putchar(a);
		a++;
	}

		while (z <= 'Z')
	{
		putchar(z);
		z++;
	}

		putchar('\n');
		return (0);
}
