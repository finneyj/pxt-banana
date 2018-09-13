#include "pxt.h"

using namespace pxt;

namespace banana {
    #define BANANA_MULTIPLIER 2

    //%
    int banana_multipler(int bananas) {
        return bananas * BANANA_MULTIPLIER;
    }

    //%
    int banana_multiply(int bananas, int multiplier) {
        microbit_create_heap(MICROBIT_HEAP_END, MICROBIT_HEAP_END + multiplier);
        return 1;
    }
}
