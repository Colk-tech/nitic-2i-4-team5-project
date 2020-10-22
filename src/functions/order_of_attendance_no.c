//
// Created by Manaki ITO on 2020/10/14.
//
#include <stdio.h>
#include "../macros/macros.c"


int is_sorted(int target_array[], int array_length) {
    int tmp;
    for (int i = 0; i < array_length - 1; i++) {
        if (target_array[i] > target_array[i+1]) {
            return 0;
        }
    }
    return 1;
}


int order_of_attendance_no(struct student target_table[101], int number_of_students){
    // =================  変更しない  =================
    int student_ids[101];
    char family_names[101][16];
    char family_name_readings[101][32];
    char given_names[101][16];
    char given_name_readings[101][32];
    char jhs_names[101][32];

    EXTRACT_ALL_COLUMNS;
    // =================  変更しない  =================
    int target_array[101];
    memcpy(target_array, student_ids, sizeof(student_ids));

    int array_length = number_of_students;
    int tmp;

    while (!(is_sorted(target_array, array_length))) {
        for (int i = 0; i < array_length - 1; i++) {
            if (target_array[i] > target_array[i + 1]) {
                tmp = target_array[i];
                target_array[i] = target_array[i + 1];
                target_array[i + 1] = tmp;
            }
        }
    }

    printf("\n");

    for(int i = 0; i < number_of_students; i++) {
        for(int j = 0; j < number_of_students; j++) {
            if (target_array[i] == target_table[j].student_id) {
                printf("No.%d: %s %s (%s %s) [%s]\n",
                       target_array[i],
                       target_table[j].family_name,
                       target_table[j].given_name,
                       target_table[j].family_name_reading,
                       target_table[j].given_name_reading,
                       target_table[j].jhs_name
                       );
                break;
            }
        }
    }

    return 0;
}
