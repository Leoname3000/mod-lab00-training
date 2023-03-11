// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t result = 1;
    for (; n > 0; n--) {
        result *= x;
    }
    return result;
}
