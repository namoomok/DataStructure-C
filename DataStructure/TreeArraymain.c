#include <stdio.h>
#include "TreeArray.h"

void ShowIntData(int data)
{
	printf("%d", data);

}


int main()
{
	BtreeNode* Bt1 = MakeBtreeNode();
	BtreeNode* Bt2 = MakeBtreeNode();
	BtreeNode* Bt3 = MakeBtreeNode();
	BtreeNode* Bt4 = MakeBtreeNode();

	SetData(Bt1,1);
	SetData(Bt2,2);
	SetData(Bt3,3);
	SetData(Bt4,4);

	MakeLeftSubTreeNode(Bt1, Bt2);
	MakerightSubTreeNode(Bt1, Bt3);
	MakeLeftSubTreeNode(Bt2, Bt4);

	InorderTraverse(Bt1,ShowIntData);
	printf("\n");
	DeleteTree(Bt1);





	return 0;
}

