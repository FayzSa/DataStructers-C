#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct BSTNode BSTNode;
struct BSTNode {
	void *Data;
	BSTNode *Left;
	BSTNode *Right;
};
BSTNode *insert(BSTNode *root,void *Data);
BSTNode *GetNewBSTNode(void *Data);
BSTNode *root;
int main(int argc, char *argv[]) {
	root = insert(root,(int*)15);
	root = insert(root,(int*)12);

	return 0;
}

BSTNode *GetNewBSTNode(void *Data){
	BSTNode *Node = (BSTNode*)malloc(sizeof(BSTNode));
	Node->Data = Data;
	Node->Left = NULL ;
	Node->Right = NULL;
}

BSTNode *insert(BSTNode *root,void *Data){
	
	if(root == NULL){
		root = GetNewBSTNode(Data);
	}
	else if(Data <= root->Data){
		
		root->Left = insert(root->Left,Data);		
	}
	else {
		root->Right = insert(root->Right,Data);
	}
	return root;
}
