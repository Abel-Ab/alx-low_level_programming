#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if character is a letter, o otherwise
 */
int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
