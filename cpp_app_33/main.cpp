#include "Equation.h"

int main() {
    Equation* linearEq = new LinearEquation();
    linearEq->inputEquation();
    linearEq->displayEquation();
    linearEq->calculateRoots();
    delete linearEq;

    Equation* quadraticEq = new QuadraticEquation();
    quadraticEq->inputEquation();
    quadraticEq->displayEquation();
    quadraticEq->calculateRoots();
    delete quadraticEq;

    return 0;
}