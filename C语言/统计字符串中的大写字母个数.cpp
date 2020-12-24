#include <stdio.h>
#include <string.h>

int main() {
	char c[50];
	int cnt = 0, i = 0;
	printf("请输入一串字符：");
	gets(c);
	while (c[i] != '\0') {
		if (c[1] >= 'A' && c[i] <= 'Z') {
			cnt++;
		}
		if (c[i] >= 'a' && c[i] <= 'z') {
			c[i] = c[i] - 32;

		}
		i++;
	}
	printf("\n\n大写字符有:%d个", cnt);
	printf("\n\n小写转换成大写后：%s", c);
}