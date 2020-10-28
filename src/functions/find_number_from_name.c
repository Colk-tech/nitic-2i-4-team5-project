#include <string.h>
#include <stdio.h>
#include "../macros/macros.c"


int find_number_from_name(struct student target_table[101], int number_of_students, char query[]) {
    // =================  変更しない  =================
    int student_ids[101];
    char family_names[101][16];
    char family_name_readings[101][32];
    char given_names[101][16];
    char given_name_readings[101][32];
    char jhs_names[101][32];

    EXTRACT_ALL_COLUMNS;
    // =================  変更しない  =================
    char all_name[101][64];

    printf("\n");

    for (int i = 0; i < number_of_students; i++) {
        strcpy(all_name[i], family_name_readings[i]);
        strcat(all_name[i], given_name_readings[i]);
    }

    for (int k = 0; k < number_of_students; k++){
        if(strcmp(all_name[k], query) == 0){
            printf("No.%d: %s %s (%s %s) [%s]\n",
                   target_table[k].student_id,
                   target_table[k].family_name,
                   target_table[k].given_name,
                   target_table[k].family_name_reading,
                   target_table[k].given_name_reading,
                   target_table[k].jhs_name
            );
            return 0;
        }
    }
    return -1;
}