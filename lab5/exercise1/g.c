#include <stdio.h>

int main() 
{  
    FILE *file;
    file = fopen ("data5.txt", "r");
    int b_num, num_samples, num_orgs_per_100, total_samples, average;

    while (!(feof (file)))
    {
        fscanf (file, "%d", &b_num);
        fscanf (file, "%d", &num_samples);
        total_samples = 0;
        average = 0;

        for (int i=0; i<=num_samples; i++)
        {
            fscanf (file, "%d", &num_orgs_per_100);
            total_samples = total_samples + num_orgs_per_100;
    
        }

        printf ("Beach number: %d ",b_num);
        average = total_samples/num_samples;

        if (average<3500){
            printf ("is safe to swim\n");
        }
        else {
            printf ("is not safe to swim\n");
        }
        
    }

    return 0;
}