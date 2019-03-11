#include<stdio.h>

int main(int argc, char const *argv[])
{
	float x = 1,y;
	y = ++x * ++x;
	printf("%f\n",x);
	printf("%f\n",y);

	return 0;
}