#include "main.h"
/**
 * _isalpha - Check if the input is alphabetical letter
 * @c: integer
 * Return: On success 1 otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
