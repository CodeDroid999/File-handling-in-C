

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char msg[100];
     //opening the file in reading mode
    fp=fopen("/temp/demo.txt", "r");

    fgets(msg,100,fp);

    printf("%s",msg);

    //closing the file
    fclose(fp);

    //demo.txt file must be present in your temp folder of c drive
    return 0;
}
