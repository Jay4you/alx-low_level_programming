#include <unistd.h>
/**
 * _putchar - prints char
 *
 * @c: char to take 
 * Return: 0
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
