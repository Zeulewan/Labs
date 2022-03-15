#include <stdio.h>  
#include <math.h>  

double quad_form (double a, double b, double c) {
    
    double root1, root2;  
    double discriminant, root_part, denom; 
    
    if(a == 0)  
    {    
        printf("Enter non-zero number for a\n");  
    }  
    else  
    {  

        discriminant = b*b-4*a*c;
        denom = 2 * a;  
        if (discriminant<0)
        {
            printf("No real roots\n");
        }
        else if(discriminant==0){
            root_part = sqrt(discriminant);
            root1     = (-b +root_part) / denom; 
            printf("The single root = %lf", root1);
      
        } 
        else {
            root_part = sqrt(discriminant);  
            root1     = (-b +root_part) / denom;  
            root2     = (-b -root_part) / denom;  
       
        printf("Root1 = %lf\nRoot2 = %lf", root1, root2);  
        }
    }  
    return 0;
}

int main(){

    double x, y, z;

    printf ("enter three numbers a, b and c");
    scanf ("%lf%lf%lf", &x, &y , &z);
    
    quad_form (x, y, z);
  
    return 0;  
}  