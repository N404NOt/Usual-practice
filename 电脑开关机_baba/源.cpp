#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	char input[2000] = { 0 };
	system("shutdown -s -t 69");
	
	printf("请注意你的电脑将在1分钟后关机，除非你承认我是你爸爸！\n");

	while (1)
	{again:
		printf("我是你？？？");
		gets_s(input);
		if (strcmp(input,"爸爸")==0)
		{
			
			printf("\n好儿子！！！爸爸让你继续玩电脑吧！！！\n");
			Sleep(2000);
			system("cls");
			printf("让爸爸给你调试下！\n");
			Sleep(5000);
			system("cls");

			printf("不对啊！！！怎么不行了..........\n");
			Sleep(2000);
			system("cls");

			printf("别急..............................\n");
				Sleep(2000);
				system("cls");

				printf("不逗你玩了，给你弄好啦！安心上网吧！！！！");

			system("shutdown -a");
			return 0;
		}
		else
		{
			printf("怎么回事？？？？？，看来你不想玩电脑了！\n");
			goto again;
		}
	}

}