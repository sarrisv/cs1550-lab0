# Simple Makefile example

# Target depends on object files - builds them first if needed
calculator: main.o operations.o
	gcc -o calculator main.c operations.c

# Rebuild main.o if source or header changes
main.o: main.c operations.h
	gcc -c main.c

# Rebuild operations.o if source or header changes
operations.o: operations.c operations.h
	gcc -c operations.c

# Remove generated files
clean:
	rm -f calculator *.o
