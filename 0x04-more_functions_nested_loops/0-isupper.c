#include "main.h"

/**
 *upper - uppercase letters
 *char to check */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
