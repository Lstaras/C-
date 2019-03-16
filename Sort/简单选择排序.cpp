#include<stdio.h>
#include<stdlib.h>

int* getArray(int n){
	int *a;
	a = (int*)malloc(n*sizeof(int));
	int i;
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	return a;
}

void showArray(int a[],int n){
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int *a;
	a = getArray(n);
	//showArray(a,n);

	//逻辑
	int i,j;
	for (i = 0; i < n; ++i)
	{
		int x = i;//x为最小值元素所在位置
		int min = a[i];//将当前的元素当作最小值
		for (j = i; j < n; ++j)
		{
			if (a[j]<min)
			{
				//若有更小则作为min
				min = a[j];
				x = j;
			}
		}
		a[x] = a[i];//交换
		a[i] = min;
	}

	showArray(a,n);

	free(a);
	
	return 0;
}

