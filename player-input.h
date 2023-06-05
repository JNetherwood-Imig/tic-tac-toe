#include <stdio.h>
#include "utils.h"

int player = 0;

void get_input() {
	int choice;
	if (player == 0) {
		while (0 == 0) {
			printf("X's turn!\n--> ");
			scanf("%d", &choice);
			choice -= 1;
			if (((get_bit(x_board, choice) == 1) || (get_bit(o_board, choice)) == 1)) {
				printf("This tile is occupied!\n");
			} else {
				set_bit(&x_board, choice);
				player = 1;
				break;
			}
		}
	} else if (player == 1) {
		while (0 == 0) {
			printf("O's turn!\n--> ");
			scanf("%d", &choice);
			choice -= 1;
			if (((get_bit(x_board, choice) == 1) || (get_bit(o_board, choice)) == 1)) {
				printf("This tile is occupied!\n");
			} else if ((choice < 0) || (choice > 8)) {
                printf("Please enter a valid input between 1 and 9.\n");
            } else {
				set_bit(&o_board, choice);
				player = 0;
				break;
			}
		}
	}
}