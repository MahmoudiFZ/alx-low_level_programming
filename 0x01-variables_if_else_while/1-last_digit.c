#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Main Function of programme
  *Discription: 'Check n if greater or less'
  *Return: 0 mean succes
  */
int main(void)
{
	int n;
	int ldigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ldigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ldigit);
	}
	else
	{
		print("Last digit of %d is %d and is less than 6 and not 0", n, ldigit);
	}
	return (0);
}
