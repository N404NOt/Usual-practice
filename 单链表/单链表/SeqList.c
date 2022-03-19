#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SListPrint(SLTNode* plist)
{
	SLTNode* cur = plist;
	while (cur != NULL)
	{	
		printf("%d->", cur->val);
		cur = cur->next;
	}
	
	printf("NULL\n");
}
SLTNode* BuySLTNode(SLTDateType x)
{
	SLTNode* node = (SLTNode*)malloc(sizeof(SLTNode));
	node->val = x;
	node->next = NULL;
	return node;
}
void SListPushBack(SLTNode** pplist, SLTDateType x)
{
	
	SLTNode* newnode = BuySLTNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SLTNode* tail = *pplist;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}

}
void SListPushFront(SLTNode** plist, SLTDateType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*plist == NULL)
	{
		*plist = newnode;
	}
	else 
{
	newnode->next = *plist;
	*plist = newnode;
}
}
void SListPopBack(SLTNode** pplist)
{
	if (*pplist == NULL)
	{
		return ;
	}
	else if ((*pplist)->next == NULL)
	{
		*pplist = NULL;
	}

	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pplist;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
	
}
void SListPopFront(SLTNode** plist)
{
	if (*plist == NULL)
	{
		return;
	}
	else if ((*plist)->next == NULL)
	{
		*plist= NULL;
	}

	else
	{


		SLTNode* prev = *plist;
		*plist = (*plist)->next;
		free(prev);
		prev = NULL;
	}
	

}
SLTNode* SListFind(SLTNode* plist,SLTDateType x)
{
	SLTNode* pos = plist;
	while (pos->val != x)
	{
		pos = pos->next;
	}
	if (pos != NULL)
	{
		printf("Found it!\n");
	}
	else
		printf("Cant found if!\n");
	return pos;
}
void SListEraseBack(SLTNode* pos)
{
	assert(pos);
	SLTNode* posnext = pos->next->next;
	free(pos->next);
	pos->next = NULL;
	pos->next =posnext;

}
void SListEraseFront(SLTNode** plist, SLTNode* pos)
{
	assert(pos);
	assert(*plist);
	if (*plist == NULL)
		return;
	else if ((*plist)->next == NULL)
	{
		*plist = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *plist;
		while (tail->next != pos)
		{
			prev = tail;
			tail = tail->next;
		}
		prev->next = pos;
		free(tail);
		tail = NULL;
	}

	
	
}

