#include <cstdlib>
#include "randfuncs.h"

int coinFlip() { return rand() % 2; }
int rollD6()   { return rand() % 6 + 1; }
int rollD10()  { return rand() % 10 + 1; }
