#include "main.h"
/**
 * jack_bauer - Main function
 * Return: no return;
 */
int jack_bauer(void)
{
	int x, y, z, w;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (w = 0; w <= 9; w++)
				{
					if (x >= 2 && y >= 4)
						break;
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(z + 48);
					_putchar(w + 48);
					_putchar('\n');
				}
			}
		}
	}
}
