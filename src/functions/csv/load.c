#include <stdio.h>
#define FILE_NAME "records.csv"


int load_csv(struct student table[101]) {
    FILE *fp;
    char *fname = FILE_NAME;

    fp = fopen( fname, "r" );
    if( fp == NULL ){
        printf( "E: Unable to open %s.\n", fname );
        return -1;
    }

    printf("\n");


    int i = 0;
    while( fscanf(fp, "%d,%[^,],%[^,],%[^,],%[^,],%s",
                       &table[i].student_id,
                       table[i].family_name,
                       table[i].given_name,
                       table[i].family_name_reading,
                       table[i].given_name_reading,
                       table[i].jhs_name) != EOF) {
        i++;
    }

    return i;

}
