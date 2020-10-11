#include "calculator.h"

//function Add 
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

//function Sub
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

//function Mult
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
