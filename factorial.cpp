/*****************************************************************************
* Name: factorial.cpp
* Author: Zach Colbert
* Date: 27 June 2018
* Description: Defines a simple function to calculate and return integer
    factorial numbers.
*****************************************************************************/

#include "factorial.hpp"

int factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }

    // Another base case
    else if (n == 1) {
        return 1;
    }

    // Recursive call
    else {
        return (n * factorial(n - 1));
    }
}
