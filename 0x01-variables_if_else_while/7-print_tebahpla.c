#include <stdio.h>
/**
* main - entry point
* Description: description for main function
* Return: Always return 0
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
