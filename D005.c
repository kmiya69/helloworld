#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    int int_ret,int_first,int_second;
    fgets(str, sizeof(str), stdin);

    int_first = atoi(strtok(str," "));
    int_second = atoi(strtok(NULL," "));

    for( int i = 0 ; i < 9 ; i++ ){
        printf("%d ",int_first + int_second*i);
    }
    printf("%d\n",int_first + int_second*9);

    return 0;
}
