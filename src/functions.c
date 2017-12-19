#include "functions.h"

double loss(double x[], double y[], double w, double b)
{
	double result = 0.0;
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		result += (w*x[i] + b - y[i], 2);
	}
	return result;
}

double gradw(double x[], double y[], double w, double b)
{
	/*
	 * Compute the gradient of the loss w.r.t. w
	 */
	double result = 0.0;
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		result += x[i] * (w*x[i] + b - y[i]);
	}
	return result;
}

double gradb(double x[], double y[], double w, double b)
{
	/*
	 * Compute the gradient of the loss w.r.t. b
	 */
	double result = 0.0;
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		result += (w*x[i] + b - y[i]);
	}
	return result;
}
