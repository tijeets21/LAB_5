#include <iostream>
#include "gamecharacter.h"

/* Conclusions for requirement six :
1. The copy constructor is called once for each function that takes a parameter by value (foo1, foo4).
2. The copy constructor is called once for functions that return by value (foo3, foo5).
3. The copy constructor is not called for functions that take parameters by reference (foo2).
*/

int main() {
    // Create GameCharacter objects and call test functions
    GameCharacter p1;
    GameCharacter p2 = p1; // Copy constructor called
    p1 = p2; // Assignment operator called
    foo1(p1); // Copy constructor called
    foo2(p1); // No copy constructor called
    foo3(p1); // Copy constructor called
    foo4(p1); // Copy constructor called
    foo5(p1); // Copy constructor called
    return 0;
}
