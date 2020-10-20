//
// Created by Manaki ITO on 2020/10/20.
//
#include <string.h>


int extract_student_ids(struct student table[101], int student_ids[101], int number_of_students) {
    for (int i = 0; i < number_of_students; i++) {
        student_ids[i] = table[i].student_id;
    }
    return 0;
}

int extract_family_names(struct student table[101], char family_names[101][16], int number_of_students) {
    for (int i = 0; i < number_of_students; i++) {
        strcpy(family_names[i], table[i].family_name);
    }
    return 0;
}

int extract_given_names(struct student table[101], char given_names[101][16], int number_of_students) {
    for (int i = 0; i < number_of_students; i++) {
        strcpy(given_names[i], table[i].given_name);
    }
    return 0;
}

int extract_family_name_readings(struct student table[101], char family_name_readings[101][32], int number_of_students) {
    for (int i = 0; i < number_of_students; i++) {
        strcpy(family_name_readings[i], table[i].family_name_reading);
    }
    return 0;
}

int extract_given_name_readings(struct student table[101], char given_name_readings[101][32], int number_of_students) {
    for (int i = 0; i < number_of_students; i++) {
        strcpy(given_name_readings[i], table[i].given_name_reading);
    }
    return 0;
}

int extract_jhs_names(struct student table[101], char jhs_names[101][32], int number_of_students) {
    for (int i = 0; i < number_of_students; i++) {
        strcpy(jhs_names[i], table[i].jhs_name);
    }
    return 0;
}

/*
struct student {
    int studet_id;
    char family_name[16];
    char given_name[16];
    char family_name_reading[32];
    char given_name_reading[32];
    char jhs_name[32];
};
*/
