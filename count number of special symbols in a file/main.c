#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *sfile;
    char ch;
    int special=0;
    sfile=fopen("/temp/easy.txt","r")

    while ((ch=getc(sfile))!=EOF)
    {
        if(ch>=65&&ch<=97||ch>97=&&ch<=122)
        {}
        else if(ch>=48&&ch<57)
        {}
        else
            special++;
    }
    printf("Total number of special symbols= %d", special);
    fclose(sfile);

    return 0;
}
