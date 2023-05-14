#include <stdio.h>
#include <stdlib.h>
#include "compare.h"
#include "search.h"




int main(int argc, char *argv[])
{
	int i;
	int len, begin, end;
	int searchterm; //= 0
	int retval;
	int a[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	if(argc > 21) {
		printf("Your array must be less than 21!!\n");
		return 0;
	}
	len = argc - 2;
	//searchterm = argv[len]
	searchterm = atoi(argv[len+1]);
	printf("\nsearch term is %d\n", searchterm);
	for(i=0;i<len;i++) {
		a[i] = atoi(argv[i+1]);
		printf("%d, ", a[i]);
	}
	printf("\n");
	begin = 0;
	end = len;
	retval = search(a, begin, end, searchterm);
	if(retval == -1) {
		printf("Search not found\n");
	}
	else {
		printf("Search found at index %d\n", retval);
	}

	return 0;
}
