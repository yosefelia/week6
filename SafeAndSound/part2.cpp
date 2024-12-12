#include "part2.h"
#include <iostream>
#include <stdexcept>

char* safe_string_copy(char* dest, unsigned int destsize, char* src)
{
	int srcsize = (int)strlen(src);
	if (srcsize >= destsize)
		throw std::overflow_error("possible buffer overflow");

	char* ret = dest;
	for (unsigned int i = 0; i < srcsize * sizeof(*src); i++)
		*dest++ = *src++;
	return ret;
}


#define BUF_SIZE 20
void part2()
{
	char password[] = "secret";
	char dest[BUF_SIZE] = "\0";
	char src[] = "hello world!";

	safe_string_copy(dest, BUF_SIZE, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
