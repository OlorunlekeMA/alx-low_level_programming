#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints alphabets in lower case
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
