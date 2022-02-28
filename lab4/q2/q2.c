#include <stdio.h>

int main()
{
    double a1;
    double a2;
    double q1;
    double q2;
    double av;
    char grade = 'F';

    printf ("\n\nEnter two assignment marks then two test marks all seperated by spaces\n\n");
    scanf ("%lf %lf %lf %lf",&a1,&a2,&q1,&q2);

    printf("\n\n\tAssignments \t\tQuizes\n");
    printf("1\t%.2lf %% \t\t%.2lf %% \n2\t%.2lf %% \t\t%.2lf %% \n\n",a1,q1,a2,q2);

    av = (a1+a2+q1+q2)/4;
    printf ("Your average mark is: %.2lf %%\n",av);

    if(av >= 80)
    {
        grade = 'A';
    } 
    else
    {
        if(av >= 70)
        {
           grade = 'B';
        } 
        else
        {
           if(av >= 60)
           {
               grade = 'C';
           } 
           else
           {
               if(av >= 50)
               {
                   grade = 'D';
               } 
               else
               {
                   grade = 'F';
               }
           }
        }
    }

    if(q1<50)
    {
        grade = 'F';
    }
    else
    {
        if (q2<50)
        {
            grade = 'F';
        }
    }

    printf("Your grade is: %c\n", grade);

    return 0;
}