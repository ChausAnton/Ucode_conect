all: copy MINILIBMX create_lib clean

copy:
	mkdir obj
	cp inc/*.h obj
	cp src/*.c obj

MINILIBMX:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c

create_lib:
	ar -src minilibmx.a *.o
	ranlib minilibmx.a
	cp *.o obj

uninstall:
	rm minilibmx.a

clean:
	rm -r obj/*.o
	rm -r *.o
	rm -r obj/*.c
	rm -rf obj

reinstall:
	make uninstall
	make
