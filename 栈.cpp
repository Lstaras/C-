#include <stdio.h>
#define maxSize 10

//Á´Õ»½áµã
typedef struct LNode
{
	int data;
	struct LNode *next;
}lnode;

int main()
{
	int x=3;

	//Ë³ÐòÕ»
	int stack[maxSize];
	int top = -1;
	
	stack[++top] = x;//ÈëÕ»
	x = stack[top--];//³öÕ»
	
	//Á´Õ»
	LNode *lst = (LNode *)malloc(sizeof(LNode));
	lst->next=NULL;//Õ»¿Õ



	return 0;
}