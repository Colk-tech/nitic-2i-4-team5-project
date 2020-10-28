#include <stdio.h>
#include <string.h>
#include "../macros/macros.c"


int find_all_students_from_jhs_name(struct student target_table[101], int number_of_students, char query[]) {
    // =================  変更しない  =================
    int student_ids[101];
    char family_names[101][16];
    char family_name_readings[101][32];
    char given_names[101][16];
    char given_name_readings[101][32];
    char jhs_names[101][32];

    EXTRACT_ALL_COLUMNS;
    // =================  変更しない  =================
    int count = 0;


    for (int i = 0; i<number_of_students; i++) {
      if(strcmp(target_table[i].jhs_name,query)==0){
          printf("No.%d: %s %s (%s %s) [%s]\n",
                 target_table[i].student_id,
                 target_table[i].family_name,
                 target_table[i].given_name,
                 target_table[i].family_name_reading,
                 target_table[i].given_name_reading,
                 target_table[i].jhs_name
          );
        count++;
      }
    }

    if (count == 0) {
      return -1;
    }

    return 0;
}
