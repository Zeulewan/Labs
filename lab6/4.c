#include <stdio.h>

int prime(int num) {
    int count = 0;
    for (int i=2; i<=num/2; i++)
    {
        if (num%i==0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        return (0);
    }
    else
    {
        return (1);
    }
    
}

int main (){
    int x;
    printf ("Enter a number\n");
    scanf ("%d", &x);

    if (prime(x)){
        printf ("The number %d is not a prime", x);
    }
    else {
        printf ("The number %d is prime", x);
    }
    
    return 0;
}