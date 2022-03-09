#include <stdio.h>   
  
double absolute(double a){
    
    if (a<0)
        a = a*(-1);

    return(a);
}


int main()  
{  
    double b;
    scanf ("%lf",&b);
    double c;
    c = absolute(b);  
    printf("%lf",c);

    return 0;  
}  