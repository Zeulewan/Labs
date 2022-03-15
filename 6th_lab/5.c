#include <stdio.h>

int check(int a){
    if(a%2){
        a=0;
    }
    else {
        a=1;
    }
    return a;
}

int main(){
    int x;
    printf ("enter an integer\n");
    scanf ("%d", &x);
    printf ("1 = even. 0 = odd\noutput: %d", check(x));
    return 0;
}