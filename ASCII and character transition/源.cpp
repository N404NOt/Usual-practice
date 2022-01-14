#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
extern void atc();
extern void cta();
int main()
{
	printf("      请选择你想要转变的形式\n");
	printf("        字符到ASCII请输入1\n");
	printf("        ASCII到字符请输入2\n");
	printf("            返回请按3\n");
	int choice;
	scanf("%d", &choice);
	
	switch (choice)
	{
	case 1: cta(); break;
	case 2:atc(); break;
	case 3: printf("程序退出！"); return 0;
	}return 0;
}

