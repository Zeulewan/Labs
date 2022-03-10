#include <stdio.h>

double cube (double s){
    return (s*s*s);
}

int main (){

    double x;
    printf ("Enter a number \n");
    scanf ("%lf", &x);
    printf ("\nThe cube of your number is %.2lf", cube(x));
    return 0;
      
}