#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char *str;
    char get_str[1000];
    int int_ret,int_first,int_second;
    char *memori;
    fgets(get_str, sizeof(get_str), stdin);

    // 改行前の文字列を取得
    str = strtok( get_str, "\n" );

    int_first = atoi(strtok(str," "));
    int_second = atoi(strtok(NULL," "));

    // printf("f[%d] s[%d]\n", );

    printf("%d\n",int_second - int_first );

    return 0;
}
