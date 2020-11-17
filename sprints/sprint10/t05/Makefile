.PHONY: all parse_agents uninstall clean reinstall

SRCS := $(wildcard src/*.c)

all: parse_agents

parse_agents:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic ${SRCS} -o parse_agents

uninstall: clean	

clean:
	rm -f parse_agents

reinstall: uninstall wc
