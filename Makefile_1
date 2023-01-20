CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

all: a

a: *.o
	$(CC) *.o -o a

*.o: *.c
	$(CC) $(CFLAGS) *.c

clean:
	rm -rf *.o a
