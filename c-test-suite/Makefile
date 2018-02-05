GCC=clang
CFLAGS=-Wall -g -o tests

all:
	$(GCC) $(CFLAGS) assertionTests.c main.c

tests:
	$(GCC) $(CFLAGS) tests.c assertionTests.c main.c

clean:
	rm -rf *.out main *.dSYM tests