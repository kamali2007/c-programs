#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    fptr=fopen("file.txt","r");
    //fprintf(fptr,"guys");
    char c[50];
    fgets(c,50,fptr);
    printf("%s",c);
    fclose(fptr);
return 0;
}

