#include <stdio.h>
#include <stdlib.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    int num = 0;
    int select;
    fgets(str, sizeof(str), stdin);
	num = atoi( str );

	select = 21 % num;
	if( 0 == select){
		select = num;
	}
    
    printf("str[%s] num[%d] select[%d]", str,num,select);
    return 0;
}
