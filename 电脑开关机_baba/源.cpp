#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	char input[2000] = { 0 };
	system("shutdown -s -t 69");
	
	printf("��ע����ĵ��Խ���1���Ӻ�ػ������������������ְ֣�\n");

	while (1)
	{again:
		printf("�����㣿����");
		gets_s(input);
		if (strcmp(input,"�ְ�")==0)
		{
			
			printf("\n�ö��ӣ������ְ������������԰ɣ�����\n");
			Sleep(2000);
			system("cls");
			printf("�ðְָ�������£�\n");
			Sleep(5000);
			system("cls");

			printf("���԰���������ô������..........\n");
			Sleep(2000);
			system("cls");

			printf("��..............................\n");
				Sleep(2000);
				system("cls");

				printf("���������ˣ�����Ū���������������ɣ�������");

			system("shutdown -a");
			return 0;
		}
		else
		{
			printf("��ô���£����������������㲻��������ˣ�\n");
			goto again;
		}
	}

}