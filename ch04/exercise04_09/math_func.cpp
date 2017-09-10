#include "math_func.h"

/* Calculate square root of x */
double sqrt_newton(double x)
{
    double g = x / 2; // guess
    double h = x / g;

    while (fabs(g - h) > MIN_VAL_DIVIDER)
    {
        g = (g+(x/g)) / 2;
        h = x / g;
    }

    return h;
}

/* Find largest common divider */
int sgd(int m, int n)
{
    int r = m % n;
    return r ? sgd(n, r) : n;
}

/* Power of */
double powxy(double x, double y)
{
    double expo = y * log(x);
    return exp(expo); // func exp = e^x
}

/*	Calculate e^x	*/
double epowx(int x)
{
    double sum = 0.0;
    double add = 1.0;
    int i = 1;

    while(1)
    {
        if(add < MIN_VAL_EXPO)
        {
            break;
        }

        sum += add;
        i++;
        add = add * x / i;
    }

    return sum;
}

/*	Calculate n! 	*/
int nfak(int n)
{
	if(n <= 0)
    {
		return 1;
	}

	else
    {
		return n * nfak(n-1);
	}
}

/*	Calculate Binomial Coefficient	*/
double binom(int n, int k)
{
	return nfak(n) / ((nfak(k)) * (nfak(n-k)));
}

/* Check if number is perfect	*/
bool is_perfect(int n)
{
	if(n <= 1)
		return 0;

	int check = 0;

	for(int i = n-1; i > 0; i--)
		if(!(n % i)) //if proper divisor
			check += i;

	return (check == n);
}

int check_val(int n)
{
	if (n == 0){	return 0;	}
	if (n > 0){		return 1;	}

	return -1;
}
