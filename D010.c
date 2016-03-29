#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char *f_str;
    char *s_str;
    char f_get_str[1000];
    char s_get_str[1000];
    int int_ret,int_first,int_second;
    char *memori;

    fgets(f_get_str, sizeof(f_get_str), stdin);
    // 改行前の文字列を取得
    f_str = strtok( f_get_str, "\n" );

    fgets(s_get_str, sizeof(s_get_str), stdin);
    // 改行前の文字列を取得
    s_str = strtok( s_get_str, "\n" );


    // printf("f[%s] s[%s]\n", f_str,s_str);
    printf("%s@%s\n", f_str,s_str);



    return 0;
}
