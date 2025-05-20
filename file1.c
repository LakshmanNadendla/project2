#include<stdio.h>
#include<stdlib.h>
#define max_file_size 1024


int main()
{



    char line[max_file_size];
    FILE *file;
    file = fopen("input.txt","r");
    if(file == NULL)
    {
        perror("Error opening the file");
        return 1;
    }
    while(fgets(line,sizeof(line),file))
    {
        printf("%s",line);
    }
    fclose(file);
    return 0;



    
}