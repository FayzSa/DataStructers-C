#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef struct Stack Stack;

struct Node{
 void *Val;
 Node *Link;
};

struct Stack{
	Node *Top;
	int *isEmpty;
};
void Reverse(Stack *S,Node *Head);
Node* Push(Stack *S,Node *N,int *Val);
Node* Pop(Stack *S);
int main(int argc, char *argv[]) {
 	Stack *S = (Stack*)malloc(sizeof(Stack));
 	S->isEmpty = (int*)0;
	Node *head = (Node*)malloc(sizeof(Node));
	Push(S,head,(int*)17);
	Node *N = (Node*)malloc(sizeof(Node));	
	Push(S,N,(int*)47);
	printf("%d \n",S->Top->Val);
	Pop(S);
	printf("%d \n",S->Top->Val);	
	Pop(S);
	printf("%d \n",S->Top->Val);	
	
	return 0;
}

Node* Push(Stack *S,Node *N,int *Val){		
	if(S->Top == NULL){
		S->Top = N;
		N->Link = NULL;
		N->Val = Val;
		S->isEmpty =(int*) 0;
	return;
	}
	N->Link = S->Top;
	S->Top = N;
	N->Val = Val;
	return N;
}

Node *Pop(Stack *S){
	Stack *temp = S;
	if(S->isEmpty)return;
	S->Top = temp->Top->Link;
	if(S->Top==NULL)S->isEmpty =(int*)1;
	
}

