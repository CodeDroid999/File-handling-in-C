#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    FILE *sfile;
    char ch;
    int alpha=0;
    sfile=fopen("/tamp/easy.txt","r");
    while((ch=getc(sfile))!=EOF)
    {
        if(ch>=65&&ch<=97||ch>=97&&ch<=122)
            alpha++;
    }
    printf("total number of alphabets= %d",alpha);
    fclose(sfile);
    return 0;
}

/*
  easy.txt file must be present in your temp folder of c drive
  ASCII value of A-Z =65-90
  ASCII  value of A-Z=97-122

  */
