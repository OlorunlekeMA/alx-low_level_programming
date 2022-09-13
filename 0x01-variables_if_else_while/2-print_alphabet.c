#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints alphabet in lower case
*Return: 0
*/

int main(void)
{

	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* this is an acii code for new line */

	return (0);

}
