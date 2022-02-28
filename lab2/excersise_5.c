#include <stdio.h>
#include <math.h>    /* round()*/

int main()
{
	
	double l = 0.0;
	double s = 0.0;
	double c = 0.0;
	
	printf("Enter long radius:  ");
    scanf("%lf", &l);
    
    printf("Enter short radius:  ");
    scanf("%lf", &s);
    
    c = 2*M_PI*sqrt((pow(s,2)+pow(c,2))/2);
    
    printf("Circumference: %lf",c);
    
	return 0;
}
