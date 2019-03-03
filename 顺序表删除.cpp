#include<stdio.h>

int del(int a[],int length,int x)
{
	int k = 0;
	int i = 0;
	while(i<length)
	{
		if(a[i]==x)
			k++;
		else
		{
			a[i-k]=a[i];//前移k
		}
		i++;
	}
	length = length - k;
	return length;
}

void show(int a[],int length)
{
	int i = 0;
	while(i<length)
	{
		printf("%d\t", a[i++]);
	}
}

int main()
{
	int a[]={2,3,5,7,1,3,5,6};
	int l = 8;
	int x = 5;
	show(a,del(a,l,x));
	return 1;
}