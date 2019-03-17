#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int a[] = {4,5,1,99,14,5,7,2,3};
	int n;
	scanf("%d",&n);
	int i;
	int count = 0;
	for (i = 0; i < sizeof(a)/sizeof(int); ++i)
	{
		if (a[i]==n)
		{
			count++;
		}
	}
	if (count==0)
	{
		printf("NO\n");
	}else{
		printf("YES\n");
	}

	return 0;
}