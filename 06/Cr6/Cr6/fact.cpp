#include "Chapter6.h"
#include <iostream>

int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}