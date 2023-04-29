#include <stdio.h>
#include "compare.h"
int main(int argc, char *argv[])
{
	int a[11] = {7, 6, 4, 3, 8, 9, 1, 2, 10, 11};
	int searchterm = 9;
	int i=5, ret;
	ret = compare(a, i, searchterm);
	if(ret == -1) {
		printf("\nNot Equal\n");
	}
	else {
		printf("\nMatches at index %d\n", i);
	}
	return 0;
}
