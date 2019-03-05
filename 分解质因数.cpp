//将一个正整数分解质因数。例如：输入90，打印出90=2*3*3*5。

//输入一个数，从2开始找他的因数，因数为本身时直接输出并跳出
//找到因数后输出当前因数并递归找对应因数的质因数
//count用来记录质因数的个数

#include<stdio.h>

int zys(int n){
	int i;
	int count = 0;
	for (i = 2; i <= n; ++i)
	{
		if (n == i)
		{
			count++;
			printf("%d\n",n);
			break;//在当前最小的因数处停止
		}
		if (n%i==0)
		{
			printf("%d*",i);//输出当前的质因数
			++count+=zys(n/i);//递归的处理未知因数
			break;//出来下层后停止
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	printf("%d\n",zys(n));
	
	return 0;
}