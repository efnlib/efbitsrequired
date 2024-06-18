#include "efbitsrequired.h"

#include <eflog2.h>

int efbitsrequired(uint32_t min, uint32_t max) {
    return (min == max) ? 0x00 : eflog2(max - min) + 0x01;
};
