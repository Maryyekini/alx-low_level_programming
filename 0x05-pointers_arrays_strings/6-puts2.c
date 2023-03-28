#include "main.h"
/**
  * puts2 - function should print only one instead of two
  *Starting with the first one
  *@str: input
  *Return: print
  */

void puts2(char *str)
{
	int logi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		logi++;
	}
	t = logi - 1;
	for(o - 0; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[0]);
		}
	}
	putchar('\n');
}
