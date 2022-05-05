#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "myHeader.h"

int coinToss(void) {
    int randomNum = 1 + rand() % 2;
    return randomNum;
}
