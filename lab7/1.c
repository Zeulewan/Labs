#include <stdio.h>

int main(){

    FILE *file;
    file = fopen ("data.txt", "r");



    double x_arr[25];
    int i = 0, j = 0, k = 0;

    while (!(feof (file))){
        fscanf (file, "%d", j);
        x_arr[i] = j;
        i++;
    }

    for(i>k;;){

        printf ("%d ", x_arr);
    }



    return 0;
    




}