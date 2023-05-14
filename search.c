#include <stdio.h>
#include "compare.h"
#include "search.h"

int search(int a[], int begin, int end, int searchterm)
{
	int mid;
	int retval;
	printf("\n begin = %d \n end = %d \n\n", begin, end);
	//if end - begin <= 1
	//array size is 1, compare and return
	if (end - begin <= 1) {
		retval = compare(a, begin, searchterm);
		if (retval == 0) {
			printf("\nfound at begin %d\n", begin);
			return begin;
		}
		return -1;
	}
	//find middle
	mid = begin + (end-begin)/2;
	//compare with middle
	retval = compare(a, mid, searchterm);
	//if a[mid] == searchterm then return mid (found at mid)
	if (retval == 0) {
		printf("\nfound at mid %d\n", mid);
		return mid;
	}
	//if a[mid] < searchterm then search(a, begin, mid, searchterm) 
	if (retval == -1) {
		printf("\n move to first half, begin = %d, end = %d \n\n", begin, mid);
		return search (a, begin, mid, searchterm);
	}
	//else then search(a, mid+1, end, searchterm)
	else {
		printf("\n move to second half, begin = %d, end = %d \n\n", mid+1, end);
		return search(a, mid+1, end, searchterm);
	}
}

