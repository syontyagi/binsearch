#include <stdio.h>
#include <string.h>
#include "compare.h"

int compare(int a[], int i, int term)
{
	if(a[i] == term) {
		return i;
	}
	return -1;
}
