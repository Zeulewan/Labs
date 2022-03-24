#include <stdio.h>

int main(){

    double max, min;
    printf ("enter max and min\n");
    scanf ("%lf %lf", &max, &min);


    FILE *file;
    file = fopen ("data.txt", "r");

    double x_arr[25];
    int i=0, j=0, l=0, m=0;

    while (!(feof (file))){
        fscanf (file, "%d", &j);
        x_arr[i] = j;
        i++;
    }
 //   printf("\nx_arr:\n");
 //   for(int k=0; k<i; k++) {
 //       printf("%d ", (int)x_arr[k]);
 //   }
 
    double xhigh=0;
    for (int l=0; l<=24; l++){
        
        if (xhigh<x_arr[l]){
            xhigh = x_arr[l];
        }
    }

    double xlow=100;
    for (int l=0; l<=24; l++){
        if (x_arr[l]<xlow){
            xlow = x_arr[l];
        }
    }
    
    double norm_x_arr[25];
    int n = 0;
    while (n<=24){
        norm_x_arr[n] = min + ((n - xlow)*(max - min))/(xhigh-xlow);
        n++;
    }


    printf("\nnorm_x_arr:\n");
    for(int k=0; k<25; k++) {
        printf("%.0lf \n", norm_x_arr[k]);
    }
    


    /*
    fclose(file);
    file = fopen ("data.txt", "r");
    
    double x_second_arr[25];
    j=0, 
    i=0;
    while (!(feof(file))){
        fscanf (file, "%d", &j);
        x_second_arr[i] = (3*j);
        i++;
    }

    printf("\nx_second_arr:\n");
    for(int m=0; m<25; m++) {
        printf("%d ", (int)x_second_arr[m]);
    }
    fclose(file);   
*/


    return 0;
}