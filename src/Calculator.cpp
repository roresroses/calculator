#include "Calculator.h"

Calculator::Calculator(std::string expression) {
    this->itsExpression = expression;
    // Get rid of spaces within the expression
    this->itsExpression.erase(std::remove(this->itsExpression.begin(), this->itsExpression.end(), ' '), this->itsExpression.end());
    this->itsResult = 0;
    this->calculate(this->itsExpression);
}

std::string Calculator::getItsExpression() {
    return this->itsExpression;
}

void Calculator::setItsExpression(std::string expression) {
    this->itsExpression = expression;
    this->calculate(this->itsExpression);
}

double Calculator::getItsResult() {
    return this->itsResult;
}

void Calculator::calculate(std::string expression) {


}