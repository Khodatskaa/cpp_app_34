#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>
#include <cmath>

class Equation {
public:
    virtual void calculateRoots() = 0; // Pure virtual function
    virtual void displayEquation() const = 0; // New virtual function for displaying the equation
    virtual ~Equation() {} // Virtual destructor
};

class LinearEquation : public Equation {
private:
    double a, b;

public:
    LinearEquation(double _a, double _b) : a(_a), b(_b) {}

    void calculateRoots() override {
        if (a == 0) {
            std::cout << "Not a linear equation." << std::endl;
        }
        else {
            double root = -b / a;
            std::cout << "Root of the linear equation: " << root << std::endl;
        }
    }

    void displayEquation() const override {
        std::cout << "Linear Equation: " << a << "x + " << b << " = 0" << std::endl;
    }
};

class QuadraticEquation : public Equation {
private:
    double a, b, c;

public:
    QuadraticEquation(double _a, double _b, double _c) : a(_a), b(_b), c(_c) {}

    void calculateRoots() override {
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            std::cout << "Roots of the quadratic equation: " << root1 << " and " << root2 << std::endl;
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            std::cout << "Root of the quadratic equation: " << root << std::endl;
        }
        else {
            std::cout << "No real roots for the quadratic equation." << std::endl;
        }
    }

    void displayEquation() const override {
        std::cout << "\nQuadratic Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    }
};

#endif 