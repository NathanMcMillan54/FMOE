#include <stdio.h>

int main() {
    FILE *fileName;
    char IFileName[50];
    char I2File[9999];

    printf("Add to file: ");
    scanf("%[^\n]", I2File);

    printf("Enter file name: ");
    scanf("%s", IFileName);


    if ( (fileName = fopen(IFileName, "r") ) == NULL)
        printf("Cannot open file.");
    else {
        fputs(I2File, fileName);
        fclose(fileName);
    }

    return 0;
}
