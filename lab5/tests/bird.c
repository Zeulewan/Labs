#include <stdio.h>

int
main (void)
{
    FILE *birdfile;
    int a, b, c, d, e;

    birdfile = fopen ("birds.txt", "r");
 

    fscanf (birdfile, "%d", &a);


    printf("%d",a);

    fclose (birdfile);


    return(0);
}