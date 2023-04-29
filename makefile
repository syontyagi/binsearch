a.out: searchmain.o compare.o search.o
	gcc -o a.out searchmain.o compare.o search.o

searchmain.o: searchmain.c compare.h search.h
	gcc searchmain.c -o searchmain.o -c

b.out: comparemain.o compare.o
	gcc -o b.out comparemain.o compare.o

comparemain.o: comparemain.c compare.h
	gcc comparemain.c -o comparemain.o -c

compare.o: compare.c compare.h
	gcc compare.c -o compare.o -c

search.o: search.c search.h compare.h
	gcc search.c -o search.o -c

clean: 
	rm *.o a.out b.out
