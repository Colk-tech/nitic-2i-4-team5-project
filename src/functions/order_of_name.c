//
// Created by Manaki ITO on 2020/10/14.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../macros/macros.c"

#define pr printf("%s",

int sort(char name_reading_combined[101][64], char sorted[101][64]);


int order_of_name(struct student target_table[101], int number_of_students){
    // =================  変更しない  =================
    int student_ids[101];
    char family_names[101][16];
    char family_name_readings[101][32];
    char given_names[101][16];
    char given_name_readings[101][32];
    char jhs_names[101][32];

    EXTRACT_ALL_COLUMNS;
    // =================  変更しない  =================

    char name_reading_combined[101][64];
    char sorted[101][64];

    for (int i = 0; i < number_of_students; i++) {
        strcpy(name_reading_combined[i], family_name_readings[i]);
        strcat(name_reading_combined[i], given_name_readings[i]);
    }

    sort(name_reading_combined, sorted);

    for(int i = 0; i < number_of_students; i++) {
        for(int j = 0; j < number_of_students; j++) {
            if (!(strcmp(sorted[i], name_reading_combined[j]))) {
                printf("%s: No.%d %s %s [%s]\n",
                       sorted[i],
                       target_table[j].student_id,
                       target_table[j].family_name,
                       target_table[j].given_name,
                       target_table[j].jhs_name
                );
                break;
            }
        }
    }

    return 0;

}


int comp(const void *x, const void *y) {
    return strcmp(*(char**)x, *(char**)y);
}


int sort(char name_reading_combined[101][64], char sorted[101][64]) {
    memcpy(sorted, name_reading_combined, sizeof(char[101][64]));

    const long n = sizeof(&sorted) / sizeof (sorted[0]);

    qsort(sorted, n, sizeof(sorted[0]), comp);

    for (int i=0 ; i<n ; i++) {
            puts(sorted[i]);
        }
    return 0;
}
