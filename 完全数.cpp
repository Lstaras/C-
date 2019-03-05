//完全数：如果一个数恰好等于它的因子之和，则称该数为"完全数"
//它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。

#include<stdio.h>

int isPerfect(int n){
	int i;
	int sum = 0;
	if (n<=0){
		return 0;
	}else{
		sum = 0;
		for (i = 1; i < n; ++i){
			if (n%i==0)
			{
				sum+=i;
			}
		}
	}
	if (sum==n)
	{
		return 1;
	}else{
		return 0;
	}

}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	printf("%d\n",isPerfect(n));

	return 0;
}