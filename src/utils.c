#include <stdint.h>

uint16_t x_board = 0;
uint16_t o_board = 0;

void set_bit(uint16_t* board, int bit) {
    *board = (*board | (1 << bit));
}

int get_bit(int board, int bit) {
    return ((board >> bit) & 1);
}
