#include <stdio.h>
/**
* main - entry point
* Description: description for main function
* Return: Always return 0
*/
int main(void)
{
int ch;
for (ch = '0'; ch <= '8'; ch++)
{
putchar(ch);
putchar(',');
putchar(' ');
}
if (ch == '9')
{
putchar(ch);
}

return (0);
}
