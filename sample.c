#include <stdio.h>
#include <string.h>
#define MAX_LENGS 100

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char get_str[1000];
    char *str;
    char *f_str;
    char *e_str;
    int len;

    // 文字列の取得
    fgets(get_str, sizeof(get_str), stdin);

    // printf("get_str[%s]",get_str);

    // 改行前の文字列を取得
    str = strtok( get_str, "\n" );

    // 最初の文字列の取得
    f_str = strtok( str, " " );

    // 最初の文字列の取得
    e_str = strtok( NULL, " " );
    // printf("f[%s] e[%s]",f_str,e_str);
    if( NULL != f_str && NULL != e_str ){
        if( 0 < strlen(f_str) && 0 < strlen(e_str) ){
            // printf("f[%s] e[%s]",f_str,e_str);
            // 文字列の比較 NG の場合は終了
            if( 0 == strcmp(f_str,e_str)){
                printf("True");
            }else{
                printf("False");
            }
            return 0;
        }
    }

    printf("False");
    // // printf("%s", "XXXXXX");
    return 0;
}
