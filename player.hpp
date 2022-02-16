#pragma once

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_
#include "status.hpp"

class Player {
    private:
        string name;
        int money;
        Status status;
    public:
        void init(string name);
        void setStatus(Status status);
        void setMoney(int money);
        void show(void);
};


#endif // _PLAYER_HPP_