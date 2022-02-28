#include <stdio.h>

int main()
{
	
	double a;
	double b;
	double c;
	
	printf ("Enter two numbers\n");
	scanf ("%lf%lf",&a,&b);
	
	if(a==b)
	{
		c = 3*(a+b);
		printf ("The triple of their sum is %.2lf\n",c);
		
	} else
	{
		c = a+b;
		printf ("Their sum is %.2lf\n",c);	

	}
	return 0;
}
