#include "bitwise.h"

int checkBit(uint64_t mask, int bit){
    return !!(mask & (1ULL << bit));
}

void setBit(uint64_t* mask, int bit){
    *mask |= (1ULL << bit);
}

void clearBit(uint64_t* mask, int bit){
    *mask &= ~(1ULL << bit);
}

void toggleBit(uint64_t* mask, int bit){
    *mask ^= (1ULL << bit);
}

void printMask(uint64_t mask){
    for (int i = 63; i >= 0; i--){
        printf("%d", checkBit(mask, i));
		if((i%8) == 0) {
			printf(" ");
		}
    }

    printf("\n");
}