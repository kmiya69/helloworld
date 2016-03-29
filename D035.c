#include <stdio.h>
#include <string.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char get_str[1000];
    char *str;
    char *yaer;
    char *month;
    char *date;

    // 文字列の取得
    fgets(get_str, sizeof(get_str), stdin);

    str = strtok( get_str, "\n" );

    // printf("str[%s]\n",str);

    yaer = strtok( str, " " );
    month = strtok( NULL, " " );
    date = strtok( NULL, " " );
    // printf("yaer[%s]month[%s]date[%s]\n",yaer,month,date);

    printf("%s/%s/%s\n",yaer,month,date);


    return 0;
}
