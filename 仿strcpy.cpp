#include <stdio.h>

#define MAX 1024

int main() {
	char str1[MAX];
	char str2[MAX];//���ڴ洢��str1���ƹ���������
	char *st1 = str1, *st2 = str2;


	printf("������һ���ַ�����");
	fgets(str1, MAX, stdin);

	char ch;

	printf("���ڿ�ʼ����---------\n");
	printf("----�������-----\n");
	printf("----����str2�������ǣ�-----\n");

	//��һ��ѭ����ʵ�� *st2 = *st1 ��Ϊֱ������д�޷���ʾ����� ��֪��ԭ��
	for (; *st1 != '\0'; st1++, st2++) {
		ch = *st1;
		*st2 = ch;
		printf("%c", *st2);
	}

	return 0;
}