#include <stdio.h>

#define MAX 1024

int main() {
	char str1[MAX];
	char str2[MAX];//用于存储从str1复制过来的数据
	char *st1 = str1, *st2 = str2;


	printf("请输入一个字符串：");
	fgets(str1, MAX, stdin);

	char ch;

	printf("现在开始拷贝---------\n");
	printf("----拷贝完成-----\n");
	printf("----现在str2的内容是：-----\n");

	//用一个循环来实现 *st2 = *st1 因为直接这样写无法显示出结果 不知道原因
	for (; *st1 != '\0'; st1++, st2++) {
		ch = *st1;
		*st2 = ch;
		printf("%c", *st2);
	}

	return 0;
}