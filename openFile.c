#include <stdio.h>
#include "headerFiles/openFile.h"

int main() {
    FILE *fp;
    char str[MAXCHAR];
    char* fileName = "test.txt";

    fp = fopen(fileName, "r");
    if (fp == NULL){
        printf("Could not open file %s", fileName);
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
    return 0;
}