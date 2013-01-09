CC=gcc
CFLAGS=-I.
DEPS = test.h
OBJ = printd.o squeeze.o qsort.o test.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)