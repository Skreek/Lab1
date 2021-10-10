#include <stdio.h> 
#include <math.h>

void function();
double x, result;
void main()
{
	x = 5;
	function(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", result);
	printf("x = ");
	scanf_s("%lf", &x);
	function(x);
	printf("f = %.4lf", result);
}

void function()
{
	result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}