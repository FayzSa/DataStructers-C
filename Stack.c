#include <stdio.h>
#include <stdlib.h>
//Define The Stack
typedef struct Stack Stack;
struct Stack{
	int Top;
	int *Stack;
	int Size;
};
void Initialize(Stack *S,int StackSize);
void push(Stack *S,int Val);
void pop(Stack *S);
int main(int argc, char *argv[]){
	printf("============================================\n");
	printf("================== Stack ===================\n");
	printf("============================================\n\n");
	Stack S;
	Stack *S1 = &S;
	 
	Initialize(S1,5);
	push(S1,15);
	push(S1,16);
	push(S1,17);
	push(S1,18);
	push(S1,19);
	push(S1,12);
	push(S1,11);
	pop(S1);
	pop(S1);
	push(S1,12);
	push(S1,11);
	return 0;
}
// Initialize the Stack and its Size " Job of  Constructer in OOP "
void Initialize(Stack *S,int StackSize){
	S->Size = StackSize;
	S->Stack =  malloc(StackSize * sizeof(int));
	S->Top = -1;
}
//Add an Eelement to the Stack 
void push(Stack *S,int Val){
	if(S->Size == (S->Top + 1)){
		printf("Stack is Full\n");
	}else{
	
	S->Top = S->Top +1;
	S->Stack[S->Top] = Val;
	printf("Pushed : %d\n",S->Stack[S->Top]);}
}
// Pop The Last Element (Last In First Out)
void pop(Stack *S){
	if(S->Top == -1){
		printf("Stack is Empty !!\n");
	}
	else{
		printf("Poped : %d\n",S->Stack[S->Top]);
		S->Top --;
	
	}
}
