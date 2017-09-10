#ifndef MATH_FUNC_H
#define MATH_FUNC_H

#include <math.h>

#define MIN_VAL_DIVIDER 1.0e-7
#define MIN_VAL_EXPO 1.0e-7

double sqrt_newton(double x);
int sgd(int m, int n);
double powxy(double x, double y);
double epowx(int x);
int nfak(int n);
double binom(int n, int k);
bool is_perfect(int n);
int check_val(int n);

#endif
