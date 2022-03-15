#include <stdio.h>

int square(int y){
    y = y*y;

    return (y);
}

int main (){
    int x;
    printf ("Input any number for square :\n");
    scanf ("%d", &x);
    printf ("The square of %d is : %d", x, square(x));

}