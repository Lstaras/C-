#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a[3][1] = {3,2,1};
	int b;
	b = a[0][0]/a[0][1]/a[0][2];
	printf("%d\n",a[0][3]);
	return 0;
}