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
	int i = low;
	int j = high;
	int temp;
	if (i<j)
	{
		temp = a[low];//设置基准值（首元素）temp
		while(i<j){
			//用条件来移动指针，先j后i,后找小前找大
			while(i<j && a[j]>=temp){
				j--;
			}
			if (i<j)//找到某个a[j]<temp
			{	
				a[i] = a[j];
				i++;
			}
			while(i<j && a[i]<temp){
				i++;
			}
			if (i<j)
			{
				a[j] = a[i];
				j--;
			}
		}	
		a[i] = temp;//此时的i=j，temp值的位置已经确定
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