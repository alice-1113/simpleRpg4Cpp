#include <stdlib.h>
#include <time.h>
#include "random.hpp"


Random::Random(void) {
    srand((unsigned int)time(NULL));
}

Random::Random(unsigned int seed) {
    srand(seed);
}

int Random::randint(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

double Random::random(void) {
    return (double)((double)(rand() % 100) / 100);
}
