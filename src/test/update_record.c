//
// Created by Manaki ITO on 2020/10/14.
//
#define FILE_NAME "../../records.csv"
#include <stdio.h>
#include <string.h>
#include "../macros/macros.c"
#include "../functions/csv/add.c"
#include "../functions/update_record.c"

// テスト
int test(void) {
    update_record();
    return 0;
}

int main(void) {
    test();
    printf("%s %s %s\n", "MAKE SURE", FILE_NAME, "IS UPDATED.");
    return 0;
}
