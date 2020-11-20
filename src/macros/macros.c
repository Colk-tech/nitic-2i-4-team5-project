//
// Created by Manaki ITO on 2020/10/21.
//
#define EXTRACT_ID_LIST extract_student_ids(target_table, student_ids, number_of_students)
#define EXTRACT_FAMILY_NAME_LIST extract_family_names(target_table, family_names, number_of_students)
#define EXTRACT_GIVEN_NAME_LIST extract_given_names(target_table, given_names, number_of_students)
#define EXTRACT_FAMILY_NAME_READING_LIST extract_family_name_readings(target_table, family_name_readings, number_of_students)
#define EXTRACT_GIVEN_NAME_READING_LIST extract_given_name_readings(target_table, given_name_readings, number_of_students)
#define EXTRACT_JHS_NAME_LIST extract_jhs_names(target_table, jhs_names, number_of_students)

#define EXTRACT_ALL_COLUMNS do{EXTRACT_ID_LIST; EXTRACT_FAMILY_NAME_LIST; EXTRACT_FAMILY_NAME_READING_LIST; EXTRACT_GIVEN_NAME_LIST; EXTRACT_GIVEN_NAME_READING_LIST; EXTRACT_JHS_NAME_LIST;} while(0)

#define MOCK { {4, "白井", "黒子", "ｼﾗｲ", "ｸﾛｺ", "常盤台中学校"}, {37, "歳納","京子","ﾄｼﾉｳ","ｷｮｳｺ","七森中学校"}, {3, "御坂","美琴","ﾐｻｶ","ﾐｺﾄ","常盤台中学校"}, {15, "初春" ,"飾利","ｳｲﾊﾙ","ｶｻﾞﾘ","柵川中学校"}, {30, "佐天" ,"涙子","ｻﾃﾝ","ﾙｲｺ","柵川中学校"}, {38, "赤座" ,"あかり","ｱｶｻﾞ","ｱｶﾘ","七森中学校"}, {34, "上条" ,"当麻","ｶﾐｼﾞｮｳ","ﾄｳﾏ","禁書中学校"}, {6,"伊藤","千佳","ｲﾄｳ","ﾁｶ","広沢小学校"} }
