.PHONY: all playlist uninstall clean reinstall

SRCS := $(wildcard src/*.c)
HDRS := $(wildcard inc/*.h)

all: playlist

playlist:
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic ${HDRS} ${SRCS}
	@mv a.out playlist

uninstall: clean
	@rm -f playlist

clean:
	@rm -f inc/*.gch

reinstall: uninstall playlist
