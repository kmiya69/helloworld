#include <stdio.h>
#include <string.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    char *get_str; // 抽出文字列
    // char *head_char;
    char ret_str[4];

    fgets(str, sizeof(str), stdin);
    
    // 最初の文字列の取得
    get_str = strtok(str, " ");
    ret_str[0] = get_str[0];
    ret_str[1] = '.';
    // 次の文字列の取得
    get_str = strtok(NULL, " ");
    ret_str[2] = get_str[0];
    printf("%s\n",ret_str );
}
