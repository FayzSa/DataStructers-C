#include <stdio.h>
#include <stdlib.h>
//Define The Queue
typedef struct Queue Queue;
struct Queue{
	int *Queue;
	int Reare;
	int Front;
	int Size;
};
void Initialize(Queue *Q,int QueueSize);
void enqueue(Queue *Q,int Val);
void dequeue(Queue *Q);
void EmptyQueue(Queue *Q);
int main(int argc, char *argv[]) {
    printf("============================================\n");
	printf("================== Queue ===================\n");
	printf("============================================\n\n");
	
	Queue Q;
	Queue *Q1 = &Q;
	Initialize(Q1,2);
	enqueue(Q1,17);
	enqueue(Q1,18);
	dequeue(Q1);
	dequeue(Q1);
    dequeue(Q1);
    enqueue(Q1,19);
    EmptyQueue(Q1);
    enqueue(Q1,19);
	
	return 0;
}
// Initialize the Queue and its size " Job of  Constructer in OOP " 
void Initialize(Queue *Q,int QueueSize){
	Q->Size = QueueSize;
	Q->Queue =  malloc(QueueSize * sizeof(int));
	Q->Front = -1;
	Q->Reare = -1;
}
// Add a Value to The Queue
void enqueue(Queue *Q,int Val){
	if(Q->Reare == (Q->Size - 1 )){
		printf("Queue is Full (You have to Make it Empty )!! \n");
	}
	else
	{	
	    Q->Reare ++;
		Q->Queue[Q->Reare] = Val;
		printf("Enqueue : %d\n",Q->Queue[Q->Reare]);
	
	}
}
//Dequeue the first Element (First in First Out)
void dequeue(Queue *Q)
{
   if(Q->Front >= Q->Reare){
   	printf("All Ellement is Dequeued\n");
   }
	else{
	
		Q->Front++;
	    printf("Dequeue : %d \n",Q->Queue[Q->Front]);
	}
}

// Make The Queue Empty
void EmptyQueue(Queue *Q){
	if(Q->Reare == (Q->Size - 1) && Q->Front>=Q->Reare){
		Q->Front = -1;
		Q->Reare = -1;
	}
	
}
