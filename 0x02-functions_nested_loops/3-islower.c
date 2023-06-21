#include "main.h"
/**
 *_islower - Do my stuff
 *@c: Character 
 *Return: 1 lowercase character 0 rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}	
