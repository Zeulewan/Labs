#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    double a, b, c;  
    double root1, root2;  
    double discriminant, root_part, denom;  
  
    printf("Enter values of a, b and c\n");  
    scanf("%lf%lf%lf", &a, &b, &c);  
  
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
        else if(discriminant=0){
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