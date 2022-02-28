#include <stdio.h>
#include <math.h>

int main()
{

	double a = 0.0;
	double  v = 0.0;	
		
	printf ("Enter the radius of a sphere:\n");
	scanf ("%lf", &a);

	v = (4.0/3.0)*M_PI*pow(a,3);
	
	printf ("The volume of the sphere is: %.2lf\n", v);

	return 0;
}
