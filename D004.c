#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char get_str[1000];
    char *str;
    char ret_str[1000]="";
    int count;


    fgets(get_str, sizeof(get_str), stdin);
    count = atoi(get_str);

    strcat(ret_str,"Hello ");

    for( int i = 0; i < count-1; i++){
        // 文字列の取得
        fgets(get_str, sizeof(get_str), stdin);
        // printf("get_str[%s][%ld]\n",strstr(get_str, "\n"),strlen(get_str));
        // 改行前の文字列を取得
        str = strtok( get_str, "\n" );
        strcat(ret_str,str);
        strcat(ret_str,",");
        // printf("get_str[%s] str[%s]\n",get_str,str);

    }

        // 文字列の取得
        fgets(get_str, sizeof(get_str), stdin);
        // printf("get_str[%s][%ld]\n",strstr(get_str, "\n"),strlen(get_str));
        // 改行前の文字列を取得
        str = strtok( get_str, "\n" );
        strcat(ret_str,str);
        strcat(ret_str,".");
        // printf("get_str[%s] str[%s]\n",get_str,str);


    // printf("ret_str[%s]\n",ret_str);
    printf("%s\n",ret_str);



}