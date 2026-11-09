#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mathfuncs.h"
#include "randfuncs.h"
using namespace std;

int main() {
    srand(time(0));
    cout << "Maths and Random Calculator" << endl
    cout << add(10, 5) << endl;
    cout << subtract(10, 5) << endl;
    cout << "Coin: " << coinFlip() << endl;
    cout << "Dice: " << rollD6() << endl;
    return 0;
}
