#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "utils.h"

char player = 'X';

int get_choice() {
	while (true) {
		int choice = 0;
		char buffer[5];
		printf("%c's turn...\n --> ", player);
		fgets(buffer, sizeof buffer, stdin);
		choice = atoi(buffer);

		if (choice < 1 || choice > 9) {
			printf("Please enter a number between 1 and 9!\n");
			return 0;
		} else if (get_bit(x_board, choice - 1) || get_bit(o_board, choice - 1)) {
			printf("Tile already taken!\n");
			return 0;
		}
		return choice;
	}
}

void fill_tile() {
	int choice = get_choice();
	while (choice) {
		choice -= 1;
		if (player == 'X') {
			set_bit(&x_board, choice);
			player = 'O';
			break;
		} else {
			set_bit(&o_board, choice);
			player = 'X';
			break;
		}
	}
}