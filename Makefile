.PHONY: all clean
all:
	cc nettrap.c -o nettrap -std=c11 -Wall -Wextra -Werror
	cc addr/sell.c -o sell -std=c11 -Wall -Wextra -Werror

clean:
	rm nettrap sell
