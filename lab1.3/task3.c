#include <stdio.h>
#include <math.h>

double function(double x);

void main()
{
	double f, x = 5;
	f = function(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", f);
	printf("x = ");
	scanf_s("%lf", &x);
	f = function(x);
	printf("f = %.4lf", f);
}

double function(double x)
{
	double f;
	f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	return(f);
}