#include <stdio.h>
#include <string.h>
#include "compare.h"

int compare(int a[], int i, int searchterm)
{
	if(a[i] == searchterm) {
		return i;
	}
	else {
		return -1;
	}
}
