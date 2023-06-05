#include <stdint.h>
#pragma once

uint16_t x_board = 0;
uint16_t o_board = 0;

void set_bit(uint16_t* board, int k) {
    *board = (*board | (1 << k));
}

int get_bit(int n, int k) {
    return ((n >> k) & 1);
}
