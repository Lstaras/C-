#include<stdio.h>
#include<stdlib.h>

//定义一
typedef struct node{
	int data;
	struct node *next;
}node;//node不可以省略

//定义二
struct node1{
	int data;
	struct node1 *next;
};//格式固定


int main(int argc, char const *argv[])
{
	struct node *n0 = NULL;//HEAD

	n0 = (node*)malloc(sizeof(node));
	n0->data=0;
	n0->next=NULL;

	printf("%d\n",n0->data);

	return 0;
}