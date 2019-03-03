//优化：
// 对冒泡排序的优化主要是减少交换次数。如果一次扫描中元素没有发生交换，那么排序就可以结束了。为此可设置一标志量flag，默认为false，如果扫描中发生交换了则把flag置为true，下轮扫描前先检查这个变量，如果flag=false则排序结束。
// 更进一步，可以记录每次扫描中最后一次交换的位置，下次扫描的时候只要扫描到上次的最后交换位置就行了，因为后面的都是已经排好序的，无需再比较。



#include<stdio.h>
#include<stdlib.h>

void bubble(int a[],int size){
	int i;
	int j = size;
	int flag = true;
	while(j-- && flag==true){
		flag = false;
		for (i = 1; i < size; ++i)
		{
			if (a[i-1]>a[i])
			{
				int t;
				t = a[i];
				a[i] = a[i-1];
				a[i-1] = t;
				flag = true;
			}
		}

	}
}

int main(int argc, char const *argv[])
{
	int *a;
	int n;
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	bubble(a,n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}