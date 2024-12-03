#include <string>

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {

    private:
        std::string itsExpression;
        double itsResult;

    public:
        Calculator(std::string expression);
        std::string getItsExpression();
        void setItsExpression(std::string expression);
        double getItsResult();
        void calculate(std::string expression);
};

#endif