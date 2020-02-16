CC = gcc

strings.o: strings.c strings.h
	$(CC) -o strings.o -c strings.c

strconv.o: strings.o strconv.h strconv.c
	$(CC) -o strconv.o -c strconv.c

strings_test: strings.o tests/strings_test.c
	$(CC) -o strings_test tests/strings_test.c strings.o

clean:
	rm -f *.o strings_test *.out
