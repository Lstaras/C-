#include<stdio.h>
//�ж�����
int isPrime(int x);

int main()
{
	int x;
	scanf("%d",&x);
	if(isPrime(x)==1)
	{
		printf("%d������",x);
	}else
	{
		printf("%d��������",x);
	}
	printf("\n");
	return 0;
}

int isPrime(int x)
{
	int flag = 1;
	if(x==1||(x!=2&&x%2==0))
	{
		flag = 0;
	}
	else
	{
		int i;
		for(i=3;i<x;i+=2)
		{
			if(x%i==0)
			{
				flag = 0;
				break;
			}
		}
	}

	return flag;
}