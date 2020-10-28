#include <stdio.h>
#include <string.h>
#include "../macros/macros.c"
#include "../functions/csv/add.c"


int add_element(char target[256], char element[], int is_last){
    strcat(target, element);

    if (!(is_last)) {
        strcat(target, ",");
    }

    return 0;
}

int update_record(void){
    char target[256];

    printf("\n");

    printf("Please input new entry like this;\n");
    printf("[No.],[family name],[given name],[reading of family name],[reading of given name],[J.H.S]\n");
    printf("e.g.) 8,山田,太郎,ﾔﾏﾀﾞ,ﾀﾛｳ,横町中学校\n");

    printf("\n");
    printf("Input?\n");

    scanf("%s", target);
    fflush(stdout);

    add_entry(target);

    return 0;
}
