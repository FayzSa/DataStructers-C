#include <stdio.h>
#include <stdlib.h>
//Define The Node
typedef struct Node Node;
struct Node{
	Node* Next;
	Node* Previous;
	void *Val;
};	
//Define The Linked List
typedef struct LinkedList LinkedList;
struct LinkedList{
	Node* Head;
};
void Add(Node *N,LinkedList *L);
void Show(LinkedList L);
void Remove(LinkedList *L);
void Initialize(Node *N, LinkedList *L);

int main(int argc, char *argv[]) {
	
	printf("============================================\n");
	printf("============ Double Linked List ============\n");
	printf("============================================\n\n");
	
	
	
// Defining The List and The First Node
LinkedList L ;
LinkedList *L1 =&L;

Node *P = (Node*)malloc(sizeof(Node));

// We Initialize our list " L1 " by the first Node " P " 

Initialize(P, L1);



//Do This 
Node *P1 (Node*)malloc(sizeof(Node));

Node *P2 =(Node*)malloc(sizeof(Node)); 

Node *P3 = (Node*)malloc(sizeof(Node));

P->Val = (int*)15;
P1->Val = (int*)17;
P2->Val = (int*)18;
P3->Val = (int*)(18*2);

Add(P1,L1);
Add(P2,L1);
Add(P3,L1);

Show(L);

Remove(L1);

Show(L);


	return 0;
}

//Add a Node to The LinkedList

void Add(Node *P,LinkedList *L){
	if(P->Previous == NULL){
		L->Head = P;
	}
	else{
	
	L->Head->Next = P;
	P->Previous =L->Head;
	L->Head = P;	
	}
}
//Show The Values of All The Nodes in The LinkedList
void Show(LinkedList L1){
	LinkedList *L = &L1;
	
	while(1){
		if(L->Head==NULL)break;
		else
		{
		   printf("%d\t",L->Head->Val);
		   L->Head = L->Head->Previous; 
		}
	}
	printf("\n");	
}
// Remove The Last Node of The LinkedList
void Remove(LinkedList *L){
	if(L->Head==NULL)printf("\nList is empty !");
	else
	{
		L->Head = L->Head->Previous;		
	}
}
//Initialize The LinkedList " Job of  Constructer in OOP "
void Initialize(Node *N, LinkedList *L){
    N->Previous = NULL;
    L->Head = N;	
}
