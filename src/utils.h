#pragma once

#include <stdint.h>

uint16_t x_board;
uint16_t o_board;

void set_bit(uint16_t* board, int bit);

int get_bit(int board, int bit);
