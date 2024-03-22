.PHONY: all clean
all:
	cc nettrap.c -o nettrap -std=c11 -Wall -Wextra
clean:
	rm nettrap
