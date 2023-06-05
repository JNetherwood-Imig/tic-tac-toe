#include "welcome.h"
#include "player-input.h"
#include "board.h"
#include "end-condition.h"

int main() {
	welcome();
	do {
		get_input();
		draw_board();
	} while ((check_for_win() == 0) && (check_for_draw() == 0));
	return 0;
}