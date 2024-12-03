#include <iostream>
#include "Calculator.h"
#include "tests.h"

using namespace std;

int main() {

    cout << "\x1B[2J\x1B[H";
    cout << "roresroses - Calculator\n";

    test_calculator();

    return 0;
}