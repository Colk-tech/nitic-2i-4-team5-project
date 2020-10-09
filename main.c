//
// Created by Manaki ITO on 2020/10/09.
//
#include "main.h"

int ask_mode(void);
int print_modes(void);

int main(void) {
    int mode;

    printf("================================================\n");
    printf("     Welcome to the Student Database System     \n");
    printf("================================================\n");

    mode = ask_mode();

    printf("Mode %d has selected.\n", mode);

    return 0;
}

int print_modes(void) {
    printf("1) Load csv file saved students' information\n");
    printf("2) Show all the recodes in ascending order of students' number\n");
    printf("3) Show all the recodes in ascending order of students' name\n");
    printf("4) Show the student number of the student of specified name\n");
    printf("5) Show all the student from J.H.S. of specified name\n");
    printf("6) Add student recode to current state\n");
    printf("7) Remove student recode to current state\n");

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
         if (!(1 <= user_input && user_input <= 7)) {
             printf("Invalid number has passed. Please specify within 1 to 7.\n");
             continue;
         }
         break;
     }

    return user_input;
}
