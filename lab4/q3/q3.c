#include <stdio.h>

int main()
{
    char class;

    printf ("\nEnter ship letter\n\n");
    scanf ("%c",&class);

    switch(class)
    {
        case 'A':
        case 'a':
            printf("Aircraft Carrier");
            break;
        case 'C':
        case 'c':
            printf("Cruiser");
            break;
        case 'D':
        case 'd':
            printf("Destroyer");
            break;
        case 'F':
        case 'f':
            printf("Frigate");
            break;
        case 'S':
        case 's':
            printf("Submarine,");
            break;
        default:
            printf("Ship is unknown");
            break;

    }

    return 0;
}