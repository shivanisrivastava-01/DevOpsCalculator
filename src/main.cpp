#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"
using namespace std;

int main() {
    srand(time(0));
    cout << "Random Calculator" << endl;
    cout << "Coin: " << coinFlip() << endl;
    cout << "Dice: " << rollD6() << endl;
    return 0;
}
