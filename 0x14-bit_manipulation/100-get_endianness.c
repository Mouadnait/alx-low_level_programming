#include "main.h"

/**
 * get_endianness-returnsprocessorendianness
 * Return:0ifbigendian,1iflittleendian
 */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char*)&i;
	return ((int)test[0]);
}
