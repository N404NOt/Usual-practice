#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
extern void atc();
extern void cta();
int main()
{
	printf("      ��ѡ������Ҫת�����ʽ\n");
	printf("        �ַ���ASCII������1\n");
	printf("        ASCII���ַ�������2\n");
	printf("            �����밴3\n");
	int choice;
	scanf("%d", &choice);
	
	switch (choice)
	{
	case 1: cta(); break;
	case 2:atc(); break;
	case 3: printf("�����˳���"); return 0;
	}return 0;
}

