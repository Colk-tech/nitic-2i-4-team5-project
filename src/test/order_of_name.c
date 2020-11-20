#include <stdio.h>
#include "../structs/student.c"
#include "../utils/extract_list.c"
#include "../functions/find_number_from_name.c"
#include "../functions/order_of_name.c"
#define NUMBER_OF_STUDENTS 8

// テスト
int test(struct student target_table[101], int number_of_students) {
    order_of_name(target_table, number_of_students);
    return 0;
}

int main(void) {
    struct student test_cases[101] = MOCK;
    test(test_cases, NUMBER_OF_STUDENTS);
    return 0;
}
