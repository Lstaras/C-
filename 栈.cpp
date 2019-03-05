#include <stdio.h>
#define maxSize 10

//栈结点
typedef struct LNode
{
	int data;
	struct LNode *next;
}lnode;



int main()
{
	int x=3;

	//初始化栈
	int stack[maxSize];
	int top = -1;
	
	stack[++top] = x;//进栈
	x = stack[top--];//出栈
	
	//Á´Õ»
	LNode *lst = (LNode *)malloc(sizeof(LNode));
	lst->next=NULL;//Õ»¿Õ



	return 0;
}