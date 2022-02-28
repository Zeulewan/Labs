#include <stdio.h>

int main()
{

	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	printf ("Enter two angles of a triangle\n");
	scanf ("%lf %lf",&a, &b);

	c = 180.0-a-b;

	printf("The third angle is: %.2lf degrees\n",c);

	return 0;

}
