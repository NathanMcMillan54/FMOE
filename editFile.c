#include <stdio.h>

int main() {
    FILE *note;
    char I2File[50];

    printf("");
    scanf("%[^\n]", I2File);


    if ( (note = fopen("test.txt","a") ) == NULL)
        printf("Cannot open note file.");
    else {
        fputs(I2File, note);
        fclose(note);
    }
    printf("\n");

    return 0;
}
