#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

// #include "../test-utils.h"
#include "ABI.h"

int main() {
	/* Acá pueden realizar sus propias pruebas */
	// assert(alternate_sum_4_using_c(8, 2, 5, 1) == 6);

	// assert(alternate_sum_4_using_c_alternative(8, 2, 5, 1) == 6);
	assert(alternate_sum_8(1,2,3,4,5,6,7,8) == (uint32_t)-4);
	printf("Test OK!\n");

	return 0;
}
