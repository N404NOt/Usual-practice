#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>

#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int password2[6], password[6] = {123456};
	char s[10];
	int i=1;
	int password, password1, password2;
	while (1)
	{
	printf("Please set a password:");
	scanf("%d", &password);
	//gets_s(s);
	printf("\n");
	printf("Please enter password again:");
	scanf("%d", &password1);
	//gets_s(s);
	if (password==password1)
	{
	printf("\n");
	printf("Setup succeeded!!!\n");
	printf("*******************************The screen will be emptied after 5 seconds!!!*******************************\n");
	for (i = 5; i >= 1; i--)
	{
		Sleep(1000);
		printf("%d!\n", i);
		
		
	}
	system("cls");
	printf("\n");
	break;
	}
	if (password != password1)
	{
		printf("The password is different twice, please re-enter!\n");
		
	}
	}
	
	
	
		
	printf("*******************************Welcome to 秘密空间!!!,进入之前请输入密码！！！只有自己人才能看小秘密*******************************\n");
		//printf("				Please input your password:");
		for (int i = 1; i <= 3; i++)
		{
			printf("Please input your password:");
			scanf("%d", &password2);
			if (password2 == password)
			{
				
				//PlaySound(L"新录音 6~1", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
				printf("*******************************Welcome to 秘密空间!!!*******************************");
				
				
			}
			printf("Wrong password!\n");
			printf("It is your%d/3 op", i);
			if (i == 3)
			{
				printf("Gitout！！！！！");
					return 0;
			}
		}

}
