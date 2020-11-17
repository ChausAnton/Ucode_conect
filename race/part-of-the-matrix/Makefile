.PHONY: clean all

SOURCE := src

all: RACE01
 
RACE01:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(SOURCE)/*.c -o part_of_the_matrix

uninstall: clean

reinstall: clean all

clean:
	rm -f part_of_the_matrix