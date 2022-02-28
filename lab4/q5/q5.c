#include <stdio.h>

int main()
{
    double a = 0;
    double x;

    a = 1 && 30%10>=0 && 30%10<=3;
    printf ("%lf\n",a);

    a = 0;
    a = 1 && !(30%10>=0) && !(30%10<=3);
    printf ("%lf\n",a);

    a = 0;
    a = 1 || !(30%10>=0) || !(30%10<=3);
    printf ("%lf\n",a);

    

/*  if(x=0)
    {
        printf ("true");
    } 
    else
    {
        printf ("false");
    }
*/
    return 0;


}