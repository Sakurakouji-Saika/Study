#include <stdio.h>
#include <string.h>

int main() {
	char str1[30], str2[30];
	printf("请输入一串字符串：");
	gets(str1);//字符串输入
	strrev(str2);//将字符串倒置
	if (strcmp(str1, str2) == 0) {
		//strcmp 是判断2个字符串的值是否一样
		printf("%s是对称字符串", str1);
	} else {
		printf("%s不是对称串！", str1);
	}
}