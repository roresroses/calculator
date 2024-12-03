#include "tests.h"
#include "Calculator.h"

#include <iostream>

using namespace std;

void test_return_expressions() {
    cout << "\n>>> Returning expressions => test_return_expressions()\n";

    Calculator exp1("1  +2");
    if (exp1.getItsExpression() == "1+2") {
        cout << "[  SUCCESS  ]\tFunction returned 1+2\n";
    }
    else {
        cout << "[    FAIL   ]\tFunction returned " << exp1.getItsExpression() << endl;
    }

    Calculator exp2("23.67/7+ 9.3");
    if (exp2.getItsExpression() == "23.67/7+9.3") {
        cout << "[  SUCCESS  ]\tFunction returned 23.67/7+9.3\n";
    }
    else {
        cout << "[    FAIL   ]\tFunction returned " << exp2.getItsExpression() << endl;
    }

    Calculator exp3("4563x3 + 19.56");
    if (exp3.getItsExpression() == "4563x3+19.56") {
        cout << "[  SUCCESS  ]\tFunction returned 4563x3+19.56\n";
    }
    else {
        cout << "[    FAIL   ]\tFunction returned " << exp3.getItsExpression() << endl;
    }
}

void test_return_result() {
    cout << "\n>>> Returning results => test_return_result()\n";

    Calculator exp1("1  +2");
    if (exp1.getItsResult() == 3) {
        cout << "[  SUCCESS  ]\tFunction returned 1+2 = 3\n";
    }
    else {
        cout << "[    FAIL   ]\tFunction returned 1+2 = " << exp1.getItsResult() << endl;
    }
}

void test_calculator() {
    cout << "\n==================== TESTS STARTED ====================\n";
    test_return_expressions();
    test_return_result();
    cout << "\n==================== TESTS ENDED ====================\n";
}