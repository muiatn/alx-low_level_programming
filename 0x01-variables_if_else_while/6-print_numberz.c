#include <stdio.h>
/**
 * main - my entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
