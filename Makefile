build:
	gcc -Wall -std=c17 -o out/tic-tac-toe src/*.c

run:
	./out/tic-tac-toe

clean:
	rm out/tic-tac-toe