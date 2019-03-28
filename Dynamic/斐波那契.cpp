//法一：备忘录---将之前所求记录下来
//法二：自底向上---提前计算所需值

#include<stdio.h>

//法一：备忘录法（可能在第一次需要递归建立备忘录）
int Fibonacci(int n){
	//输入0直接结束
	if (n==0){
		return n;
	}
	//申请备忘录数组的空间并初始化为-1
	//备忘录中存放的是对应数字的斐波那契值
	int *memo;
	memo = (int*)malloc((n+1)*sizeof(int));
	int i;
	for (i = 0; i <= n; ++i)
		memo[i] = -1;

	return fib(n,memo);
}

int fib(int n,int memo[]){
	//值已保存在备忘录中则输出
	if (memo[n]!=-1)
	{
		return memo[n];
	}
	//值不在备忘录中，需要递归获取memo的值
	if (n==1||n==2)
	{
		memo[n] = 1;
	}else{
		memo[n] = fib(n-1,memo) + fib(n-2,memo);
	}
	return memo[n];
}

//法二---把斐波那契数列拆解开一步到位得数
int Fibonacci2(int n){
	if (n==0)
	{
		return n;
	}

	//建立完整的备忘录
	int memo[];
	memo = (int*)malloc((n+1)*malloc);
	memo[0]=0;
	memo[1]=1;
	int i;
	for (i = 2; i <= n; ++i)
	{
		memo[i] = memo[i-1] + memo[i-2];
	}

	return memo[n];

}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	int i,j;
	i = Fibonacci(n);
	j = Fibonacci2(n);
	printf("%d,%d\n",i,j);

	return 0;
}