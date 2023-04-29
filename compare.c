#include <stdio.h>
#include <string.h>
#include "compare.h"

int compare(int a[], int i, int searchterm)
{
	if (a[i] == searchterm) {
		return 0;
	}
	else if (a[i] < searchterm) {
		return -1;
	}
	return 1;
}
