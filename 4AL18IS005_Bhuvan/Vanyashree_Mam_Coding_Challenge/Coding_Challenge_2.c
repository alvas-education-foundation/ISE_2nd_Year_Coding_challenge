// Write C program to find area of an equilateral triangle

#include <stdio.h>
#include <math.h>
int main()
{
	float side, area;
	printf("Enter side of an equilateral triangle: ");
	scanf("%f", &side);

	area = (sqrt(3) / 4) * (side * side);

	printf("Area of equilateral triangle = %.2f sq. units", area);
	return 0;
}
