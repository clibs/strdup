
CFLAGS = -std=c99 -Wall -Wextra

check: test

test: strdup.o test.o
	$(CC) $^ -o $@
	./test

%.o: %.c
	$(CC) $< -c -o $@ $(CFLAGS)

clean:
	rm -f test strdup.o test.o

.PHONY: check clean
