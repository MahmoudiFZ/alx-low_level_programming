#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Main Function of programme
  *Discription: 'Check n if positive or nigative'
  *Return: 0 mean succes
  */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
