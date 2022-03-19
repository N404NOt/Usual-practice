#include<stdio.h>
#include<stdlib.h>
//******************************************************************************************************************************************************************************
/*商品结构*/
typedef struct _prop
{
	int id;			//商品编号
	char name[50];	//名称
	double pricr;	//价钱
	int stock;		//库存量，背包中叠加量
	char desc[200];	//功能
}Prop;
/*背包结构*/
typedef struct {
	int playerId;	//所属玩家编号
	int count;		//道具数量；
	int max;		//背包槽数--可以购买
	Prop props[8];		//背包道具数组
}Bag;
/*玩家结构*/
typedef struct
{
	int id;			//玩家编号
	char name[50];
	char pass[50];
	Bag bag;
	double gold;	//玩家金币--可转换铜，银币；
	double sysee;	//元宝数量；
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
		{1,"双倍经验卡",3000,10,"双击666"},
		{2,"腐烂的道袍",5000,8,"只可远观不可亵玩！"},
		{3,"生锈的铁剑",8000,10,"新手专用"},
		{4,"无极袍",13000,5,"刀枪不入，水火不侵"},
		{5,"致胜1级丹",83000,10,"吃完保证还想再吃再吃。。。"}
	};
	
	propsCount = sizeof(propArray) / sizeof(Prop);
	props = propArray;
	
	static Player playerArray[] = {
		{1,"超级毛毛虫","123456",playerArray[1].gold = 1500.00},//不报错但是无法定义
		{2,"塔罗奥特曼","123456"},
		{3,"元始天尊之徒","123456"},
		{4,"星河","123456"}
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
	printf("编号\t名称\t\t单价\t\t库存\t\t商品介绍\n");
	for (i=0; i < propsCount; i++)
	{
		printf("%-7d\t%-14s\t%-14.2f\t%d\t\t%s\n", props[i].id, props[i].name, props[i].pricr, props[i].stock, props[i].desc);
	}
}
void ShowPlayers()
{
	int i = 0;
	if (players == NULL)return;
	printf("编号\t名称\t\t金币\n");
	for (i = 0; i < playerCount; i++)
	{
		printf("%-7d\t%-14s\t%-14.2f\n", players[i].id, players[i].name, players[i].gold);
	}
}