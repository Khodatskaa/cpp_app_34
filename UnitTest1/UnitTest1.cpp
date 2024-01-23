#include "pch.h"
#include "CppUnitTest.h"
#include "../cpp_app_33/Equation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(LinearEquationTest)
		{
			Equation* linearEq = new LinearEquation();
			std::istringstream input("2 -3");
			std::cin.rdbuf(input.rdbuf()); 

			linearEq->inputEquation();
			linearEq->displayEquation();
			linearEq->calculateRoots();

			Assert::AreEqual("Enter coefficients for the linear equation (ax + b = 0):\nEnter a: Enter b: Linear Equation: 2x + -3 = 0\nRoot of the linear equation: 1.5\n", GetOutput().c_str());

			delete linearEq;
		}

		TEST_METHOD(QuadraticEquationTest)
		{
			Equation* quadraticEq = new QuadraticEquation();
			std::istringstream input("1 -3 2");
			std::cin.rdbuf(input.rdbuf());  

			quadraticEq->inputEquation();
			quadraticEq->displayEquation();
			quadraticEq->calculateRoots();

			Assert::AreEqual("Enter coefficients for the quadratic equation (ax^2 + bx + c = 0):\nEnter a: Enter b: Enter c: Quadratic Equation: 1x^2 + -3x + 2 = 0\nRoots of the quadratic equation: 2 and 1\n", GetOutput().c_str());

			delete quadraticEq;
		}

	private:
		std::string GetOutput()
		{
			std::ostringstream oss;
			oss << std::cin.rdbuf();
			return oss.str();
		}
	};
}
