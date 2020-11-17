.PHONY: clean all

SOURCE := src

all: T00
 
T00:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(SOURCE)/*.c -o read_file

uninstall: clean

reinstall: clean all

clean:
	rm -f read_file