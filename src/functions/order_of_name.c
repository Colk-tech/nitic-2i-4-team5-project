//
// Created by Manaki ITO on 2020/10/14.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../macros/macros.c"

int sort_name(char names[101][64], int number, char sorted[101][64]);

int operation_count = 1;


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

    // 名前の結合作業を行う
    char name_reading_combined[101][64];
    char sorted[101][64];

    for (int i = 0; i < number_of_students; i++) {
        strcpy(name_reading_combined[i], family_name_readings[i]);
        strcat(name_reading_combined[i], given_name_readings[i]);
    }

    int exit_code = sort_name(name_reading_combined, number_of_students, sorted);

    for (int i = 0; i < number_of_students; i++) {
        find_number_from_name(target_table, number_of_students, sorted[i]);
    }

    printf("\n");

    return 0;
}

int swap(int dist, int src, char target_array[101][64]) {
    char buffer[64];

    strcpy(buffer, target_array[dist]);
    strcpy(target_array[dist], target_array[src]);
    strcpy(target_array[src], buffer);

    return 0;
}

int smaller_length(char a[64], char b[64]) {
    int smaller_string_length;

    if (strlen(a) < strlen(b)) {
        smaller_string_length = strlen(a);
    } else {
        smaller_string_length = strlen(b);
    }

    return smaller_string_length;
}

int sort_name(char names[101][64], int number, char sorted[101][64]) {
    int smaller_string_length;

    memcpy(sorted, names, sizeof(char[101][64]));

    while (operation_count != 0) {
        operation_count = 0;

        for (int i = 0; i < (number - 1); i++) {
            smaller_string_length = smaller_length(sorted[i], sorted[i + 1]);

            for (int m = 0; m < smaller_string_length - 1; m++) {

                if (strcmp(&sorted[i][m], &sorted[i + 1][m]) > 0) {
                    swap(i, i + 1, sorted);
                    operation_count += 1;
                    break;
                }

                if (strcmp(&sorted[i][m], &sorted[i + 1][m]) < 0) {
                    break;
                }

            }

        }

    }

    return 0;
}
