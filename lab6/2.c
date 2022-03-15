#include <stdio.h>

int fact(int y){
  
    int x, fact=1;

    for(x=1; x<=y; x++){
        fact = fact*x; 
    }
    return (fact);
}

int main() {

    printf ("The sum of the series is : %d", fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5);

    return 0;
}