//判断任意年份是否为闰年，需要满足以下条件中的任意一个：
//该年份能被 4 整除同时不能被 100 整除；
//该年份能被400整除。

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	if (n%4==0&&n%100!=0)
	{
		printf("%d YES\n",n);
	}else if (n%400==0)
	{
		printf("%d YES\n",n);
	}else{
		printf("%d NO\n",n);
	}

	return 0;
}