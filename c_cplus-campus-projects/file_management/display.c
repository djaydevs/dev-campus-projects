#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num;
    char fileName[70];
    FILE *fptr;

    printf("Input the filename you want to open: ");
    scanf("%s", &fileName);

    strcat(fileName, ".txt");
    fptr = fopen(fileName, "r");

    if (fptr == NULL)
    {
        printf("File doesn't exist!");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    fscanf(fptr, "%d", &num);
    printf("Value of n = %d", num);

    fclose(fptr);

    return 0;
}
