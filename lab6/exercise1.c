#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    double a, b, c;  
    double root1, root2;  
    double under_root_part, root_part, denom;  
  
    printf("Enter values of a, b and c\n");  
    scanf("%lf%lf%lf", &a, &b, &c);  
  
    if(a == 0)  
    {    
        printf("Enter non-zero number for a\n");  
    }  
    else  
    {  

        under_root_part = b*b-4*a*c;  
        if(under_root_part<0)
        {
            printf("No roots plus I don't compute imaginary roots \n");
        }
        else
        {
        root_part = sqrt(under_root_part);
        denom     = 2 * a;  
        root1     = (-b +root_part) / denom;  
        root2     = (-b -root_part) / denom;  
        printf("Root1 = %lf\nRoot2 = %lf", root1, root2);  
        }
    }  
  
    return 0;  
}  