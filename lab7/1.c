#include <stdio.h>

int main(){

    double max, min;
    printf ("enter max then min\n");
    scanf ("%lf %lf", &max, &min);


    FILE *file;
    file = fopen ("data.txt", "r");

    double x_arr[25];
    int i=0, j=0;

    while (!(feof (file))){
        fscanf (file, "%d", &j);
        x_arr[i] = j;
        i++;
    }
    printf("\nx_arr:\n");
    for(int k=0; k<i; k++) {
        printf("%d ", (int)x_arr[k]);
    }
 
    double xhigh=0;
    for (int l=0; l<=24; l++){
        
        if (xhigh<x_arr[l]){
            xhigh = x_arr[l];
        }
    }   
    printf ("high %lf", xhigh );

    double xlow=100;
    for (int e=0; e<=24; e++){
        if (x_arr[e]<xlow){
            xlow = x_arr[e];
        }
    }
    printf ("low %lf", xlow );
    
    double norm_x_arr[25];
    double w;
    int n = 0;
    while (n<25){
        w = (min+1 + ((x_arr[n] - xlow)*(max - min))/(xhigh-xlow))-1;
        norm_x_arr[n] = w;
        n++;
    }


    printf("\nnorm_x_arr:\n");
    for(int k=0; k<25; k++) {
        printf("%.0lf \n", norm_x_arr[k]);
    }
    
    fclose(file);   



    return 0;
}