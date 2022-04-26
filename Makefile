CC=gcc
CFLAGS=-std=gnu99
#-Wall -Wextra -Wno-missing-field-initializers

all:
	$(CC) $(CFLAGS) tests/example0.c -o bin/example0
	$(CC) $(CFLAGS) tests/example1.c -o bin/example1

clean:
	rm -f bin
	mkdir bin

tidy:
	./scripts/tidy.sh

test:
	@clear
	./bin/example0
	@echo -e "\n\n"
	./bin/example1
