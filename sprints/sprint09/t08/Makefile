all: copy MINILIBMX clean

copy:
	mkdir obj
	cp inc/*.h obj/
	cp src/*.c obj/

MINILIBMX: object.o

object.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o calc obj/*.c


uninstall:
	rm calc

clean:
	rm -r obj/*.c
	rm -rf obj

reinstall:
	make uninstall
	make
