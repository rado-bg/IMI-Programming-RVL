#pragma once
#include <stdint.h>
#include <stdio.h>

int checkBit(uint64_t mask, int bit);
void setBit(uint64_t* mask, int bit);
void clearBit(uint64_t* mask, int bit);
void toggleBit(uint64_t* mask, int bit);
void printMask(uint64_t mask);