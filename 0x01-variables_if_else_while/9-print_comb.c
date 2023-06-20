#include <stdio.h>
/**
  *main - Main Function of programme
  *Discription: 'Check n if positive or nigative'
  *Return: 0 mean succes
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
