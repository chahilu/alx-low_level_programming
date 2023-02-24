#include "main.h"
/**
* _supper - checks for uppercase letters
*@c : The character being checked
*
*Return: 1 if character is upper case 0 other wise
*/
int _supper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);

	else
		return (0);
}
