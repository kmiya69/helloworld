#include <stdio.h>
#include <string.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char get_str[1000];
    char *str;
    // char *out_str_tmp;
    char out_str_tmp[1000];
    char out_str[1000];
    int len;
    int str_len;
    int last_len;
    char *out_str_len;
    int get_str_len;

    // 文字列の取得
    fgets(get_str, sizeof(get_str), stdin);
    // printf("get_str[%s]",get_str);

    // 改行前の文字列を取得
    str = strtok( get_str, "\n" );

    // 文字列のチェック
    // 文字列の長さ
    if( NULL !=  str ){
    	str_len = strlen(str);
    	// 指定文字数以上か
    	if( 3 <= str_len ){
    		// 文字数分終了するまで
	    	for( ; 0 < str_len ; ){
	    		// 指定文字列探査
			    if((out_str_len = strstr(str, "at")) != NULL ) {
			    	// 見つかった
			    	// 見つかった場所までの長さを取得
			    	get_str_len = out_str_len - str;
			    	// ０文字以上の場合、指定文字列までの文字をコピー
			    	if( 0 < get_str_len ){
				    	strncpy( out_str_tmp , str , get_str_len );
				    	// 終端を入れる
				    	out_str_tmp[get_str_len] = '\0';
				    	// printf("out_str_tmp1[%s][%d][%d] out_str_tmp[%s]\n", str+last_len, str_len, str_len - last_len, out_str_tmp);
				    	strcat(out_str,out_str_tmp);
			    	}
			    	// 置換文字列をいれる
			    	strcat(out_str,"@");
			    	// 文字列の先頭位置を変更：現在文字先頭ポインタ + 変換文字列までの長さ + 置換文字数分
			    	str = str + get_str_len + 2;
			    }else{
			    	// 見つからなかった
			    	// printf("out_str3[%s]\n",str);

			    	// 残りの文字をすべてコピー
			    	strncpy( out_str_tmp , str , str_len );
			    	// 終端を入れる
			    	out_str_tmp[str_len] = '\0';
			    	// printf("out_str_tmp2[%s][%d][%d] out_str_tmp[%s]\n", str+last_len, str_len, str_len - last_len, out_str_tmp);
			    	// 取り出した文字列を出力側へコピー
			    	strcat(out_str,out_str_tmp);
			    	// printf("out_str2[%s]\n",out_str);
			    	// str_len = len;
			    	// 残りの文字数を保存
			    	get_str_len = str_len;
		    		str = str + get_str_len;

			    }
			    // 残りの文字数を算出
		    	str_len = strlen(str);
			    // printf("str_len[%d]len[%d] str[%s]\n\n",str_len,len,str);
	    	}
    	}
    }
    // printf("str[%s]len[%ld]\n",out_str,strlen(out_str));
	printf("%s\n",out_str);

return 0;

}
