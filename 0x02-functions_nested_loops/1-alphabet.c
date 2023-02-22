#include "main.h"
/**
 * main print alphabet - print alphabet in lowercase
 * Description: It prints the alphabet in lowercase, followed by a new line.
 * Return:0 (success)
 *
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z' ; la++)
		_putchar(la);

	_putchar('\n');
}
