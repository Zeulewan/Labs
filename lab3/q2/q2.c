#include <stdio.h>

int main()
{
	double yard = 1.094;
	double mile = 0.0006215;
	double a = 100;
	double b = 200;
	double c = 400;
	double d = 800;

	printf ("Meters\tYards\tMiles\n");

	printf ("%.0f\t%.2f\t%.2f\n",a, a*yard, a*mile);
	printf ("%.0f\t%.2f\t%.2f\n",b, b*yard, b*mile);
	printf ("%.0f\t%.2f\t%.2f\n",c, c*yard, c*mile);
	printf ("%.0f\t%.2f\t%.2f\n",d, d*yard, d*mile);





	return 0;
	
}
