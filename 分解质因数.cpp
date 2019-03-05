//将一个正整数分解质因数。例如：输入90，打印出90=2*3*3*5。

//输入一个数，从2开始找他的因数，因数为本身时直接输出并跳出
//找到因数后输出当前因数并递归找对应因数的质因数

#include<stdio.h>

void zys(int n){
	int i;
	int k;
	for (i = 2; i <= n; ++i)
	{
		if (n == i)
		{
			printf("%d\n",n);
			break;
		}
		if (n%i==0)
		{
			k = n/i;
			printf("%d*",i);
			zys(k);
			break;
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	zys(n);
	
	return 0;
}