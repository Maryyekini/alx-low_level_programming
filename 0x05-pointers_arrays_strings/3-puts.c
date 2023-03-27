#include "main.h"
/**
  * _puts -print astring, followed by a line, to stdout
  *@str: string to print
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
