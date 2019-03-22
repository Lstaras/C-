#include<stdio.h>

int isPerfect(int n){
	int flag = 0;
	int sum = 0;
	int i;
	for(i=1;i<n;i++){
		if (n%i==0)
		{
			sum+=i;
		}
	}
	if (sum==n)
	{
		flag = 1;
	}
	return flag;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	if (isPerfect(n)==1)
	{
		printf("OK\n");
	}else{
		printf("NO\n");
	}


	return 0;
}