#include <string.h>
#include <stdio.h>
#include "../macros/macros.c"
#include "../structs/student.c"
#include "../utils/extract_list.c"
#include "../functions/find_name_from_number.c"
#define NUMBER_OF_STUDENTS 8


// テスト
int test(struct student target_table[101], int number_of_students, int query) {
    find_name_from_number(target_table, number_of_students, query);
    return 0;
}

int main(void) {
    struct student test_cases[101] = MOCK;
    int query;
    printf("Query?: ");
    scanf("%d", &query);
    test(test_cases, NUMBER_OF_STUDENTS, query);
    return 0;
}
