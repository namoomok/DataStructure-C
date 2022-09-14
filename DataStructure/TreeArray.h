#ifndef __TREEARRAY_H__
#define __TREEARRAY_H__


typedef int BTData;


typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeeNode* Left;
	struct _bTreeeNode* Right;
}BtreeNode;


BtreeNode* MakeBtreeNode();
BTData GetData(BtreeNode* Bnode);
void SetData(BtreeNode* Bnode, BTData data);

BtreeNode* GetLeftSubTree(BtreeNode* Bnode);
BtreeNode* GetRightSubTree(BtreeNode* Bnode);

void MakeLeftSubTreeNode(BtreeNode* Main, BtreeNode* Sub);
void MakerightSubTreeNode(BtreeNode* Main, BtreeNode* Sub);

void DeleteTree(BtreeNode* bt);


typedef void (*VisitFuncPtr)(BTData);

void InorderTraverse(BtreeNode* Bt, VisitFuncPtr action);
void PreorderTraverse(BtreeNode* Bt, VisitFuncPtr action);
void PostorderTraverse(BtreeNode* Bt, VisitFuncPtr action);







#endif