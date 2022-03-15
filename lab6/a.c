#include <stdio.h>

int number(){
    int a;

    printf ("Enter number between 10 and 99\n");
    scanf ("%d", &a);
    
    while (!(a<99 && a>10)){
        printf ("Enter number between 10 and 99\n");
        scanf ("%d", &a);
    }
    
    return (a);
}


int main(){

    
    printf ("\nIt is %d", number());
    
    return 0;
}