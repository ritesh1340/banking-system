#ifndef UTILS_H
#define UTILS_H

#include "Balance.h"
#pragma once

class utils
{
public:
    utils();
    static Balance convertCentsToBalance(long long);
    static long long convertBalanceToCents(Balance);
    ~utils();

private:

};

#endif