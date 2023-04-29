#include <stdio.h>
#include "compare.h"
#include "search.h"

int search(int a[], int begin, int end, int searchterm)
{
	int mid;
	int retval;
	printf("\n begin = %d \n end = %d \n\n", begin, end);
	//if end - begin > 1
	//mid = (end-begin)/2
	if (end - begin > 1) {
		mid = begin + (end-begin)/2;
	}
	//else if a[begin] == searchterm then return begin (found at begin) (array is 1)
	else {
		retval = compare(a, begin, searchterm);
		if (retval == 0) {
			printf("\nfound at begin %d\n", begin);
			return begin;
		}
		return -1;
	}
	//if a[mid] == searchterm then return mid (found at mid)
	retval = compare(a, mid, searchterm);
	if (retval == 0) {
		printf("\nfound at mid %d\n", mid);
		return mid;
	}
	//if a[mid] < searchterm then search(a, begin, mid, searchterm) 
	if (retval == -1) {
		printf("\n move to first half begin = %d \n end = %d \n\n", begin, mid);
		return search (a, begin, mid, searchterm);
	}
	//else then search(a, mid+1, end, searchterm)
	else {
		printf("\n move to second half begin = %d \n end = %d \n\n", mid+1, end);
		return search(a, mid+1, end, searchterm);
	}
}

