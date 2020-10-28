//
// Created by Manaki ITO on 2020/10/09.
//
#include "main.h"

#define MESSAGE_3 "Input number of the student\n"
#define MESSAGE_4 "Input name in KATAKANA LEAVE SPACE BETWEEN LASTNAME AND SURNAME\n"
#define MESSAGE_5 "Input J.H.S. name in KANJI.\n"

int ask_mode(void);
int print_modes(void);
int ask_parameter(char message[], char user_input[]);
int ask_continue(void);

int main(void) {
    int mode;
    struct student current_table[101];
    int number_of_students;
    char user_input[64];

    printf("================================================\n");
    printf("     Welcome to the Student Database System     \n");
    printf("================================================\n");

    number_of_students = load_csv(current_table);
    printf("Loading csv file succeeded!\n");

    while(1) {
        mode = ask_mode();

        printf("Mode %d has been selected.\n", mode);
        switch (mode) {
            case 1:
                order_of_attendance_no(current_table, number_of_students);
                break;
            case 2:
                order_of_name(current_table, number_of_students);
                break;
            case 3:
                find_name_from_number(current_table, number_of_students, (int) ask_parameter(MESSAGE_3, user_input));
                break;
            case 4:
                ask_parameter(MESSAGE_4, user_input);
                find_number_from_name(current_table, number_of_students, user_input);
                break;
            case 5:
                ask_parameter(MESSAGE_5, user_input);
                find_all_students_from_jhs_name(current_table, number_of_students, user_input);
                break;
            case 6:
                update_record();
                number_of_students = load_csv(current_table);
                printf("Update table succeeded!\n");
                break;
        }
        if (!ask_continue()) {
            printf("bye");
            break;
        };
    }

    return 0;
}

int print_modes(void) {
    printf("1) Show all the recodes in ascending order of students' number\n");
    printf("2) Show all the recodes in ascending order of students' name\n");
    printf("3) Show the student number of the student of specified name\n");
    printf("4) Show the student name of the student of specified number\n");
    printf("5) Show all the student from J.H.S. of specified name\n");
    printf("6) Add new student entry and refresh current table\n");

    return 0;
}

int ask_mode(void) {
    int user_input;

    printf("\n");
    printf("Desire Mode?\n");
    printf("\n");

    print_modes();
    printf("\n");
    printf("Desire mode number?\n");

     while(1) {
         scanf("%d", &user_input);
         printf("\n");
         if (!(1 <= user_input && user_input <= 6)) {
             printf("Invalid number has been passed. Please specify within 1 to 6.\n");
             continue;
         }
         break;
     }

    return user_input;
}

int ask_continue(void) {
    int user_input;

    printf("\n");
    printf("Do you want to continue? (0 / 1)\n");

    while(1) {
        scanf("%d", &user_input);
        printf("\n");
        if (!(0 <= user_input && user_input <= 1)) {
            printf("Invalid number has been passed. Please specify within 0 to 1.\n");
            continue;
        }
        break;
    }

    return user_input;
}

int ask_parameter(char message[], char user_input[]) {
    printf("\n");
    printf("%s\n", message);
    printf("\n");

    scanf("%s", user_input);

    return 0;
}
