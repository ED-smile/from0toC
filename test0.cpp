#include <stdio.h>

#define MAX 1024

int main() {
	char str1[MAX];
	char str2[MAX];  // ���ڴ洢��str1���ƹ���������
	char *st1 = str1, *st2 = str2;
	int length = 0;

	printf("������һ���ַ�����");
	fgets(str1, MAX, stdin);

	printf("���ڿ�ʼ����---------\n");

	while ((*st2++ = *st1++) != '\0') {
		length++;
	}
	;
	st2 -= length - 1;
	printf("----�������-----\n");
	printf("----����str2�������ǣ�%s-----\n", str2);

	return 0;
}