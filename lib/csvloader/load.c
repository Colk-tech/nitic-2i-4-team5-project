#include "load.h"

int main(){
    FILE *fp;
    char *fname = FILE_NAME;
    struct student table[101];

    fp = fopen( fname, "r" );
    if( fp == NULL ){
        printf( "%sファイルが開けません\n", fname );
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
        printf("%d,%s,%s,%s,%s,%s\n",
               table[i].student_id,
               table[i].family_name,
               table[i].given_name,
               table[i].family_name_reading,
               table[i].given_name_reading,
               table[i].jhs_name);
        i++;
    }

}
