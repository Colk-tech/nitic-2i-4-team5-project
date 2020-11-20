//
// Created by Manaki ITO on 2020/10/14.
//
#include <stdio.h>
#include "../macros/macros.c"
#include "../structs/student.c"
#include "../utils/extract_list.c"
#include "../functions/order_of_attendance_no.c"
#define NUMBER_OF_STUDENTS 8


// テスト
int test(struct student target_table[101], int number_of_students) {
    order_of_attendance_no(target_table, number_of_students);
    return 0;
}

int main(void) {
    struct student test_cases[101] = MOCK;
    test(test_cases, NUMBER_OF_STUDENTS);
    return 0;
}
