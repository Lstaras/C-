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
	int *a;
	int n;
	scanf("%d",&n);
	a = getArray(n);

	int i,j;
	int temp;
	for (i = 1; i < n; ++i)
	{
		temp = a[i];
		j = i-1;//当前元素的前一个元素
		while(temp<a[j] && j>=0){//已排序部分为有序，故只需要关注首个无序元素
			a[j+1] = a[j];//元素后移一位
			j--;
		}
		a[j+1] = temp;
	}

	showArray(a,n);

	return 0;
}