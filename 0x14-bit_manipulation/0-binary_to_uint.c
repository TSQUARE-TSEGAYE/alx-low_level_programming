#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int de_v = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		de_v = 2 * de_v + (b[i] - '0');
	}

	return (de_v);
}
