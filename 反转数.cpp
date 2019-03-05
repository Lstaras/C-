//反转数和回文一样吧。。。

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int r;
	int x = 0;
	while(n!=0){
		r = n%10;
		x = x * 10 + r;
		n /= 10;
	}
	printf("%d\n",x);
	return 0;
}