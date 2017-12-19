/*
 ============================================================================
 Name        : LinearRegression.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

#define SIZE 1000
#define ALPHA 0.001

int main() {
	// Initialize a dataset of x and y
	double x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	double y[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	// Initialize parameters w and b
	double w = 0.0;
	double b = 0.0;


	int i = 0;
	double gw = 0.0;
	double gb = 0.0;

	printf("Training.........\n");
	double losses[SIZE] = {0.0};
	double timers[SIZE] = {0.0};
	printf("%f\n", losses[0]);
	while (i < SIZE)
	{
		losses[i] = loss(x, y, w, b);
		timers[i] = i;
		gw = gradw(x, y, w, b);
		gb = gradb(x, y, w, b);
		w -= ALPHA*gw;
		b -= ALPHA*gb;
		i++;
	}
	printf("W: %f\n", w);
	printf("b: %f\n", b);

	return 0;
}


