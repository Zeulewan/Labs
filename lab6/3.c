#include <stdio.h>

double area (double b, double h){
  
    double a = (b*h)/2;
  
    return(a);
}

int main()  
{
    double x, y;
    printf ("enter base then height of triangle\n");
    scanf ("%lf%lf", &x, &y);
    printf ("\nArea is %.2lf", area(x,y));
    
    return 0;
}