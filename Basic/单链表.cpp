#include <stdio.h>
#include <malloc.h>

typedef struct LNode
{
	int data;
	struct LNode *next;
}lnode;
	
//´´½¨½áµã
LNode* createNode(int data)
{
	LNode *c = (LNode *)malloc(sizeof(LNode));
	c->data=data;
	c->next=NULL;
	return c;
}

//Tail
lnode* createList1(lnode *&p,int a[],int n)
{
	lnode *h;//¶¨Î»Ö¸Õë

	p = (lnode *)malloc(sizeof(lnode));
	p->next=NULL;
	
	h = p;
	int i = 0;
	for (i=0;i<n;i++)
	{
		//´´½¨½áµã
		lnode *x = createNode(a[i]);
		//Á¬½Ó
		h->next =x;
		//Ö¸ÕëºóÒÆ
		h=h->next;
	}
	h->next=NULL;
	return p;
}

//Head
lnode* createList2(lnode *&p,int a[],int n)
{
	lnode *h;//¶¨Î»Ö¸Õë

	p = (lnode *)malloc(sizeof(lnode));
	p->next=NULL;

	h = p;
	int i = 0;
	for (i=0;i<n;i++)
	{
		//´´½¨½áµã
		lnode *x = createNode(a[i]);
		//Á¬½Ó
		x->next = h->next;
		h->next = x;
	}
	return p;
}

//Êä³öÒ»Ìõµ¥Á´±í
void showList(lnode *p)
{
	lnode *x;
	x = (lnode *)malloc(sizeof(lnode));
	x = p->next;
	while(x != NULL)
	{
		printf("%d\t",x->data);
		x = x->next;
	}
	printf("\n");
}

//merge
LNode* merge1(lnode *p,lnode *q)
{
	lnode *x = (lnode *)malloc(sizeof(lnode));
	lnode *a;
	a = x;
	lnode *b,*c;
	b = p;
	c = q;
	while(b->next!=NULL&&c->next!=NULL)
	{
		if (b->next->data <= c->next->data)
		{
			a->next = b->next;
			a = b->next;
			b->next = b->next->next;
		}
		else
		{
			a->next = c->next;
			a = c->next;
			c->next = c->next->next;
		}
	}
	a->next=NULL;
	if(b->next==NULL)
	{
		a->next = c->next;
	}
	else
	{
		a->next = b->next;
	}
	return x;
}

int main()
{
	LNode *p;
	LNode *q;
	
	int a[] = {4,5,2,6,8,2,7,444};
	createList1(p,a,8);//Tail
	createList2(q,a,8);//Head

	printf("Î²²å·¨:");
	printf("Í·½áµãµØÖ·=0X%d\n",p);
	showList(p);
	printf("Í·²å·¨:");
	printf("Í·½áµãµØÖ·=0X%d\n",q);
	showList(q);

	//¹é²¢£¨µÝÔö£©
	LNode *m;
	LNode *n;
	LNode *A;
	
	int b[] = {3,45,8,2,4,9};
	int c[] = {3,5,0,7,22,5};
	createList1(m,b,6);
	createList1(n,c,6);
	
	printf("¹é²¢ÅÅÐò£¨µÝÔö£©£º\n");
	showList(m);
	showList(n);
	printf("µÃµ½£º\n");

	A = merge1(m,n);
	showList(A);

	return 0;
}