#include "TreeArray.h"
#include <stdlib.h>
#include <stdio.h>

BtreeNode* MakeBtreeNode()
{
	BtreeNode* BTptr = (BtreeNode*)malloc(sizeof(BtreeNode));
	BTptr->Left = NULL;
	BTptr->Right = NULL;
	return BTptr;
}

BTData GetData(BtreeNode* Bnode)
{
	return Bnode->data;
}

void SetData(BtreeNode* Bnode, BTData data)
{
	Bnode->data = data;
}

BtreeNode* GetLeftSubTree(BtreeNode* Bnode)
{
	return Bnode->Left;
}

BtreeNode* GetRightSubTree(BtreeNode* Bnode)
{
	return Bnode->Right;
}

void MakeLeftSubTreeNode(BtreeNode* Main, BtreeNode* Sub)
{
	if (Main->Left != NULL)
		free(Main->Left);
	
	Main->Left = Sub;
}

void MakerightSubTreeNode(BtreeNode* Main, BtreeNode* Sub)
{
	if (Main->Right != NULL)
		free(Main->Right);
	Main->Right = Sub;
}

void DeleteTree(BtreeNode* bt)
{
	if (bt == NULL)
		return;
	

	DeleteTree(bt->Left);
	DeleteTree(bt->Right);
	printf("%d ", bt->data);
	free(bt);
	


}



void InorderTraverse(BtreeNode* Bt, VisitFuncPtr action)
{
	if (Bt == NULL)
		return;

	InorderTraverse(Bt->Left, action);
	printf("%d ", Bt->data);
	InorderTraverse(Bt->Right, action);
}

void PreorderTraverse(BtreeNode* Bt, VisitFuncPtr action)
{
	if (Bt == NULL)
		return;

	printf("%d ", Bt->data);
	PreorderTraverse(Bt->Left, action);
	PreorderTraverse(Bt->Right, action);
}

void PostorderTraverse(BtreeNode* Bt, VisitFuncPtr action)
{
	if (Bt == NULL)
		return;

	PostorderTraverse(Bt->Left, action);
	PostorderTraverse(Bt->Right, action);
	printf("%d ", Bt->data);
}







