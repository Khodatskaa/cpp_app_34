#include "Equation.h"

int main() {
    Equation* linearEq = new LinearEquation(2, -3);
    linearEq->displayEquation();
    linearEq->calculateRoots();
    delete linearEq;

    Equation* quadraticEq = new QuadraticEquation(1, -3, 2);
    quadraticEq->displayEquation();
    quadraticEq->calculateRoots();
    delete quadraticEq;

    return 0;
}