#include <stdio.h>
// #include <string.h>
#include <stdlib.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    int num;
    fgets(str, sizeof(str), stdin);
    num = atoi(str);
    for( int i = 1 ; i < 9 ; i++ ){
        printf("%d ",num*i);
    }

    printf("%d\n",num*9);

    // printf("%d\n",int_ret);


    return 0;
}
