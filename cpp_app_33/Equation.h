#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>
#include <cmath>

class Equation {
public:
    virtual void calculateRoots() = 0; 
    virtual void inputEquation() = 0; 
    virtual void displayEquation() const = 0; 
    virtual ~Equation() {} 
};

class LinearEquation : public Equation {
private:
    double a, b, c;

public:
    void inputEquation() override {
        std::cout << "Enter coefficients for the linear equation (ax + b = 0):" << std::endl;
        std::cout << "Enter a: ";
        std::cin >> a;
        std::cout << "Enter b: ";
        std::cin >> b;
    }

    void calculateRoots() override {
        if (a == 0) {
            std::cout << "Not a linear equation" << std::endl;
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
    void inputEquation() override {
        std::cout << "\nEnter coefficients for the quadratic equation (ax^2 + bx + c = 0):" << std::endl;
        std::cout << "Enter a: ";
        std::cin >> a;
        std::cout << "Enter b: ";
        std::cin >> b;
        std::cout << "Enter c: ";
        std::cin >> c;
    }

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
            std::cout << "No real roots for the quadratic equation" << std::endl;
        }
    }

    void displayEquation() const override {
        std::cout << "Quadratic Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    }
};

#endif 