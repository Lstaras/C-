#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	int x = 0;
	int r;
	while(n!=0){
		r = n%10;
		x = x*10+r;
		n/=10;
	}

	printf("%d\n",x);

	return 0;
}