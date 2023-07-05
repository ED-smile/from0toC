#include <stdio.h>

#define MAX 1024

int main() {
	char str1[MAX];
	char str2[MAX];  // 用于存储从str1复制过来的数据
	char *st1 = str1, *st2 = str2;
	int length = 0;

	printf("请输入一个字符串：");
	fgets(str1, MAX, stdin);

	printf("现在开始拷贝---------\n");

	while ((*st2++ = *st1++) != '\0') {
		length++;
	}
	;
	st2 -= length - 1;
	printf("----拷贝完成-----\n");
	printf("----现在str2的内容是：%s-----\n", str2);

	return 0;
}