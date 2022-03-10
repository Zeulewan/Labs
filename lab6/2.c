#include <stdio.h>   
  
double absolute(double a){
    
    if (a<0)
        a = a*(-1);
    printf ("\nAbsolute value is %.2lf", a);
      
    return(a);
}


int main()  
{  
    double b;
    printf ("Enter number ");
    scanf ("%lf",&b);
    absolute(b);  
    return 0;  
}  