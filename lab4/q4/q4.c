#include <stdio.h>
#include <limits.h>

int main()
{

    double r;

    printf ("\nEnter richter scale number\n\n");
    scanf ("%lf",&r);

    switch((int)(r*10))
    {
        case 75 ... INT_MAX:
            printf ("Catastrophe: Most buildings destroyed\n");
            break;
        case 65 ... 74:
            printf ("Disaster: Houses and buildings may collapse\n");
            break;
        case 55 ... 64:
            printf ("Serious damage: Walls may crack or fall\n");
            break;
        case 50 ... 54:
            printf ("Some damage\n");
            break;
        case 0 ... 49:
            printf ("Little or no damagee\n");
            break;
        default:
            printf ("Invalid input");
            break;
    }

    return 0;

}