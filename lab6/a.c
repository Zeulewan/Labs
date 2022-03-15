#include <stdio.h>

/*
int number10to99(){
    int x = 0;
    while (!(x<99 && x>10)){
        printf ("Enter number between 10 and 99\n");
        scanf ("%d", &x);
    }
    return (x);
}

int b(){
    return (59/10);
}

int c(){
    return (59%10);
}
*/

int f1(int y){
    int x = 0;

    while (y>=10){
        y = y-10;
        x++;
    }

    return (x);
}

int f2(int y){
    return (y%10);
}

int main(){
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);

   // printf ("\na) %d\n", number10to99());
   // printf ("b) %d\n", b());
   // printf ("c) %d\n", c());
    printf ("d) The number of 10's in %d is %d and the remainder\nwhen %d is divided by 10 is %d\n", x, f1(x), x, f2(x));
    return 0;
}