#define _CRT_SECURE_NO_WARNINGS 1
// SeqList.h
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDateType;
typedef struct SLTNode
{
	SLTDateType val;
	struct SLTNode * next;
}SLTNode;
void SListPrint(SLTNode* plist);
void SListPushBack(SLTNode** plist, SLTDateType x);
void SListPushFront(SLTNode** plist, SLTDateType x);
void SListPopBack(SLTNode** plist);
void SListPopFront(SLTNode** plist);
SLTNode* SListFind(SLTNode* plist,SLTDateType x);
void SListEraseBack(SLTNode* pos);
void SListEraseFront(SLTNode** plist,SLTNode* pos);

