#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sfile, *dfile;
    char ch;
    //opening the file in reading mode
    sfile=fopen("/temp?easy.txt", "r");

    //opening the file in write mode
    dfile=fopen("temp/soft.txt", "w");

    while((ch=getc(sfile))!=EOF)

    //pasting the file character by character
    putc(ch,dfile);

    //closing the files
    fclose(sfile);
    fclose(dfile);

    /*easy.txt  must be present in your temp folder of c drive so
    that its content can be copied into soft.txt file */
    return 0;
}
