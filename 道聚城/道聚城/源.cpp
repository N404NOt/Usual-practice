#include<stdio.h>
#include<stdlib.h>
//******************************************************************************************************************************************************************************
/*��Ʒ�ṹ*/
typedef struct _prop
{
	int id;			//��Ʒ���
	char name[50];	//����
	double pricr;	//��Ǯ
	int stock;		//������������е�����
	char desc[200];	//����
}Prop;
/*�����ṹ*/
typedef struct {
	int playerId;	//������ұ��
	int count;		//����������
	int max;		//��������--���Թ���
	Prop props[8];		//������������
}Bag;
/*��ҽṹ*/
typedef struct
{
	int id;			//��ұ��
	char name[50];
	char pass[50];
	Bag bag;
	double gold;	//��ҽ��--��ת��ͭ�����ң�
	double sysee;	//Ԫ��������
}Player;
//*****************************************************************************************************************************************************************
Prop* props;
Player* players;
int propsCount;
int playerCount;
void Init();
void ShowProps();
void ShowPlayers();
//****************************************************************************************************************************************
int main()
{
	Init();
	printf("\n");
	ShowProps();
	ShowPlayers();
	return 0;
}
//******************************************************************************************************************************************************
void Init()
{
	static Prop propArray[] = {
		{1,"˫�����鿨",3000,10,"˫��666"},
		{2,"���õĵ���",5000,8,"ֻ��Զ�۲������棡"},
		{3,"���������",8000,10,"����ר��"},
		{4,"�޼���",13000,5,"��ǹ���룬ˮ����"},
		{5,"��ʤ1����",83000,10,"���걣֤�����ٳ��ٳԡ�����"}
	};
	
	propsCount = sizeof(propArray) / sizeof(Prop);
	props = propArray;
	
	static Player playerArray[] = {
		{1,"����ëë��","123456",playerArray[1].gold = 1500.00},//���������޷�����
		{2,"���ް�����","123456"},
		{3,"Ԫʼ����֮ͽ","123456"},
		{4,"�Ǻ�","123456"}
	};
	playerArray[0].gold = 50000;
	playerArray[1].gold = 150000;
	playerArray[2].gold = 500000;
	playerArray[3].gold = 1150000;
	
	 playerCount = sizeof(playerArray) / sizeof(Player);
	players = playerArray;
}
void ShowProps()
{
	int i = 0;
	if (props == NULL)return;
	printf("���\t����\t\t����\t\t���\t\t��Ʒ����\n");
	for (i=0; i < propsCount; i++)
	{
		printf("%-7d\t%-14s\t%-14.2f\t%d\t\t%s\n", props[i].id, props[i].name, props[i].pricr, props[i].stock, props[i].desc);
	}
}
void ShowPlayers()
{
	int i = 0;
	if (players == NULL)return;
	printf("���\t����\t\t���\n");
	for (i = 0; i < playerCount; i++)
	{
		printf("%-7d\t%-14s\t%-14.2f\n", players[i].id, players[i].name, players[i].gold);
	}
}