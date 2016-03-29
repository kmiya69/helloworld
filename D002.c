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
    int_ret = int_first;
    if( int_first  ==  int_second ){
        printf("eq\n");
        return 0;
    }
    if( int_first < int_second ){
        int_ret = int_second;
    }
    printf("%d\n",int_ret);



    return 0;
}
