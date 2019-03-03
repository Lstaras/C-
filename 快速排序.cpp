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

void quickSort(int a[],int low,int high){
	int i,j;
	i = low;
	j = high;
	int temp;
	if (i<j)
	{
		temp = a[low];//设置基准值（首元素）
		while(i<j){
			//用条件来移动指针
			while(j>i && a[j]>=temp){
				j--;
			}
			if (i<j)
			{	
				a[i] = a[j];
				i++;
			}
			while(j>i && a[i]<temp){
				i++;
			}
			if (i<j)
			{
				a[j] = a[i];
				j--;
			}
		}	
		a[i] = temp;//此时的i=j
		quickSort(a,low,i-1);
		quickSort(a,i+1,high);
	}
}

int main(int argc, char const *argv[])
{
	int *a;
	int n;
	scanf("%d",&n);
	a = getArray(n);

	quickSort(a,0,n-1);



	showArray(a,n);
	return 0;
}