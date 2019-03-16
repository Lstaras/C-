//按照从大（两个整数中较小的数）到小（到最小的整数1）的顺序
//求出第一个能同时整除两个整数的自然数，即为所求

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);

	int i = a>b?b:a;//i为二者中较小的一个

	while(i>0){
		if (a%i==0&&b%i==0)
		{
			break;
		}
		i--;
	}

	printf("%d\n",i);

	return 0;
}