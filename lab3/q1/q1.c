#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0.0;
	int b = 0.0;
	int c = 0.0;
	int d = 0.0;
	int e = 0.0;
	int f = 0.0;
	int g = 0.0;
	double h = 0.0;

	printf ("enter 4 numbers with spaces between each of them\n\n");
	scanf ("%i %i %i %i",&a,&b,&c,&d);

	e = a+b+c+d;

	printf ("\nwow the sum of those numbers is %i\n\n",e);
	
	f = (a+b)-(c+d);		

	printf: ("zooweemama the first two minus the last two is %i\n\n",f);

	g = pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2);
	printf ("wwooOOOoooww the sum of the squares of the numbers are: %i\n\n",g);

	h = sqrt((double)g)/((double)e);
	printf ("oh my gosh the squares divides by the sum is: %.2f\n\n",h);

	return 0;
}
