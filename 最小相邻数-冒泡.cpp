//最小相邻数的冒泡实现
//一个乱序序列的逆序数 = 在只允许相邻两个元素交换的条件下,得到有序序列的交换次数


#include<stdio.h>
#include<stdlib.h>

int bubble(int a[],int n){
	int count = 0;
	int i;
	for (i = 1; i < n; ++i)
	{
		if (a[i] < a[i-1])
		{
			count++;//出现逆序则加一
			int temp;
			temp = a[i];//交换
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}
	return count;//返回当前一次遍历所得的逆序数个数
};

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int *a;
	a = (int*)malloc(n*sizeof(int));
	int i;
	//输入
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	//排序与计数
	int count = 0;
	for (i = 0; i < n; ++i)//此处的n为保证完全有序
	{
		count+=bubble(a,n);
	}

	//输出
	for (i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}

	printf("\n");
	printf("%d\n",count);
	return 0;
}