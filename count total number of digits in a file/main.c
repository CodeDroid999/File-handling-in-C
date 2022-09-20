#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *sfile;
    char ch;
    int digit=0;
    sfile=fopen("/temp/easy.txt","r");
    while(((ch=getc(sfile))!=EOF
    {
        if(ch>=48&&ch<=57)
        digit==;
    }
    printf("total number of digits= %d",digit);
    fclose(sfile);
}
/*easy.txt file must be present in your temp folder of c drive
ASCII value of 0-9=48=57*/
