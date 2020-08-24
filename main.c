#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int makeAFile() {
    system("./makeFile");
    return 0;
}

int editAFile() {
    system("./editFile");
    return 0;
}

int aQ() {
    char MoE[5];

    printf("Type: M to make a file, or E to edit a file, O to open a file \n");
    scanf("%s", MoE);

    if(!strcmp(MoE, "M")) {
        printf("\nMaking file\n");
        makeAFile();
        exit(0);
    } else if (!strcmp(MoE, "E")) {
        printf("\nEditing file\n");
        editAFile();
        exit(0);
    } else if (!strcpy(MoE, "O")) {
        printf("\n Openning file\n");
        system("./openFile");
        exit(0);
    } else if (!strcpy(MoE, "help")) {
        printf("test");
        system("./help");
        exit(0);
    }
    else {
        printf("Enter M, E, or O \n");
    }
    return 0;
}

int main() {
    printf("________\n");
    printf("| FMOE |\n");
    printf("--------\n");
    printf("The text editor for FOMOS and GNU \n\n");

    for (;;) {
        aQ();
    }

    exit(0);
}
