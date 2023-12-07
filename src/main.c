#include <stdio.h>
#include "player-input.h"
#include "board.h"
#include "end-condition.h"

int main() {
	printf("Welcome to tic tac toe!\n");
	printf("Enter the number corresponding to the tile in which you wish to play.\n");
	printf(" 1 | 2 | 3 \n"
		   "---+---+---\n"
		   " 4 | 5 | 6 \n"
		   "---+---+---\n"
		   " 7 | 8 | 9 \n\n");

	do {
		fill_tile();
		draw_board();
	} while ((check_for_win() == 0) && (check_for_draw() == 0));
	return 0;
}