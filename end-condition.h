#include <stdio.h>
#include "utils.h"

const uint16_t WINNING_STATES[] = { 0b000000111,
									0b000111000,
									0b111000000,
									0b001001001,
									0b010010010,
									0b100100100,
									0b100010001,
									0b001010100 };

const uint16_t DRAW = 0b111111111;

int check_for_win() {
	for (int i = 0; i < 8; i++) {
		if ((x_board & WINNING_STATES[i]) == WINNING_STATES[i]) {
			printf("X Wins!\n");
			return 1;
			break;
		} else if ((o_board & WINNING_STATES[i]) == WINNING_STATES[i]) {
			printf("O Wins!\n");
			return 1;
			break;
		}
	}
	return 0;
}

int check_for_draw() {
	if ((x_board | o_board) == DRAW) {
		printf("It's a draw!\n");
		return 1;
	} else {
		return 0;
	}
}