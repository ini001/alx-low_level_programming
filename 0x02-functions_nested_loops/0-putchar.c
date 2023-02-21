#include <unistd.h>
#include "main.h"
#include "_putchar"
/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word = "_putchar";
	/*
	 * char word[8] = "_putchar";
	 * int i;
	 * for (i = 0; i < 8; i++)
	 * {
	 * _putchar(word[i]);
	 * _putchar('\n');
	 * }
	 */
	putc(word, stdout);
	return (0);
}
