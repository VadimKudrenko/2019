#include <stdio.h>
#include "tool.h"


int fuc(int base)

{
	int result = 1;
	int i;
	
	for (i = base; i > 0; i--) {
		result *= i;
	}
	return result;
}

int mod(int base)
{
	int result = base;
	if (base < 0) {
		result *= -1;
	}

	return result;
}
