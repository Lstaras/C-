//一个指针变量加/减一个整数是
//将该指针变量的原值(是一个地址)和它指向的变量所占用的内存单元字节数相加或相减。
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a[5] = {1,2,3,4,5};
	int i;
	// i = 0;
	// while(i!=5){
	// 	scanf("%d",(a+i));
	// 	i++;
	// }
	int *p = a;
	p+=3;
	i = 0;
	while(i!=5){
		printf("%d ",*(a+i));
		i++;
	}
	printf("\n%d\n",(p-a)*sizeof(int));
	return 0;
}