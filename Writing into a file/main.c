
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    FILE *fp;
    fp=fopen("/temp/demo.txt","w");
    fprintf(fp,"Hello friends, how are you???");
    fclose(fp);
    return 0;
}
