#include"Seqlist.h"
void Text1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 0);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushFront(&plist, 7);
	SListPushFront(&plist, 8);
	SListPushFront(&plist, 9);
	SListPopBack(&plist);
	SLTNode* pos = NULL;
	pos = SListFind(plist, 7);
	
	
		if (pos != NULL)
		{
			pos->val =pos->val * 100;
		}
		//SListEraseBack(pos);
	SListEraseFront(&plist,pos);


	
	SListPrint(plist);

}
int main()
{
	Text1();
}