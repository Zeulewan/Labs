#include <stdio.h>
//#include <stdlib.h>

int main() 
{  
    
    FILE *file;
    file = fopen ("erie.txt", "r");
    int b_num, num_samples, num_orgs_per_100, total_samples, average, num_of_beaches=0, num_open=0, num_closed=0;
    
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    while (!(feof (file)))
    {
        num_of_beaches++;
        fscanf (file, "%d", &b_num);
        fscanf (file, "%d", &num_samples);
        total_samples = 0;
        average = 0;

        if (0==num_samples){
            printf("Beach number: %d has not been tested.\n", b_num);
        } 
        else {
            for (int i=1; i<=num_samples; i++){
                fscanf (file, "%d", &num_orgs_per_100);
                total_samples = total_samples + num_orgs_per_100;
            }
            printf ("Beach number: %d ",b_num);
            average = total_samples/num_samples;

            if (average<3500){
                printf ("is open.\n");
                num_open++;
            }
            else {
                printf ("is closed.\n");
                num_closed++;
            }        
        }
    }

    printf ("\nThe number of beaches is %d\nThe number of opened beaches is %d\nThe number of closed beaches is %d",num_of_beaches, num_open, num_closed);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //fclose(file);   
    return 0;
}