#include <stdio.h>
#include <string.h>


int add_entry(char target_text[256]) {
    /* ファイルポインタ */
    FILE *fp;

    /* ファイルを追記モードでオープン */
    fp = fopen(FILE_NAME, "a");

    /* ファイルが適切に読み込まれているかを確認 */
    if( fp == NULL ) {
        printf("Unable to load %s\n", FILE_NAME);
        return -1;
    }

    /* 入力した文字列をファイルに書き込む */
    fprintf(fp, "%s\n", target_text);
    fclose(fp);

    return 0;
}
