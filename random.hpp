#pragma once


class Random {
public:
    Random(void);
    Random(unsigned int seed);
    int randint(int min, int max);
    double random(void);
};

