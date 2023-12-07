#include <stdio.h>
#include "utils.h"

void draw_board() {
	printf("\n");
	for (int i = 0; i < 9; i+=3) {
		for (int j = 0; j < 3; j++) {
			if (get_bit(x_board, i + j) == 1) {
				printf(" X ");
			} else if (get_bit(o_board, i + j) == 1) {
				printf(" O ");
			} else {
				printf("   ");
			}
			if (j != 2) {
				printf("|");
			}
		}
		printf("\n");
		if (i < 6) {
			printf("---+---+---\n");
		}
	}
	printf("\n");
}