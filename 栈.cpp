#include <stdio.h>
#define maxSize 10

//��ջ���
typedef struct LNode
{
	int data;
	struct LNode *next;
}lnode;

int main()
{
	int x=3;

	//˳��ջ
	int stack[maxSize];
	int top = -1;
	
	stack[++top] = x;//��ջ
	x = stack[top--];//��ջ
	
	//��ջ
	LNode *lst = (LNode *)malloc(sizeof(LNode));
	lst->next=NULL;//ջ��



	return 0;
}