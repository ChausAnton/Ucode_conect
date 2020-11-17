flags := -std=c11 -Wall -Wextra -Werror -Wpedantic
name := way_home

all: MINILIBMX

MINILIBMX:
	clang $(flags) src/*.c -o $(name)

clean:
	rm -f $(name)

uninstall:
	rm -f $(name)

reinstall:
	make uninstall
	make
