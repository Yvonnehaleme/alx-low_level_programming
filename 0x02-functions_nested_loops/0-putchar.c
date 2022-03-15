#include "main.h"
/**
 * main - prints Holberton, folowed by newline.
 * Return: 0 (success)
 */
int main(void)
{
	char *holberton;

	for (holberton = "Holberton\n"
;*holberton != '\0'; ++holberton);
	       putchar(holberton);
	return (0);
}
