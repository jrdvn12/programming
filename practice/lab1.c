#include <stdio.h>
#include <math.h>

int main() {
	float num1, num2, sum, diff, prod, quo;

	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);

	sum=num1+num2;
	diff=num1-num2;
	prod=num1*num2;
	quo=num1/num2;

	printf("\nSum of %.2f and %.2f: %.2f\n", num1, num2, sum);
	printf("Difference of %.2f and %.2f: %.2f\n", num1, num2, diff);
	printf("Product of %.2f and %.2f: %.2f\n", num1, num2, prod);
	printf("Quotient of %.2f and %.2f: %.2f\n", num1, num2, quo);
	printf("Square Root of %.2f and %.2f are %.2f and %.2f respectively.\n", num1, num2, sqrt(num1), sqrt(num2));

	return 0;
}
