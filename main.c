#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int makeAFile() {
    printf("\nYou are in ");
    system("pwd");
    return 0;
}

int aQ() {
    char MoE[1];

    printf("Type: M to make a file, or E to edit a file\n");
    scanf("%s", MoE);

    if(!strcmp(MoE, "M")) {
        printf("\nMaking file\n");

        exit(0);
    } else if (!strcmp(MoE, "E")) {
        printf("\nEditing file\n");
        exit(0);
    }
    else {
        printf("Enter M or E \n");
    }
    return 0;
}

int main() {
    printf("FMOE \n");
    printf("The text editor for FOMOS and GNU \n\n");

    for (;;) {
        aQ();
    }

    return 0;
}
