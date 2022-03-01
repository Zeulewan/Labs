#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int main ()
{
  FILE *fileName;
  char ch[100];
  fileName = fopen("hi.txt", "r");
  printf("%s", fgets(ch,50,fileName));
  fclose(fileName);
  
  
    return 0;
}