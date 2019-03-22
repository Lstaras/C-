#include<stdio.h>
#include<stdlib.h>

void quickSort(int a[],int low,int high){

	int i = low;
	int j = high;
	int temp;

	if (i<j)
	{
		temp = a[i];
		while(i<j){
			while(i<j&&a[j]>=temp){
				j--;
			}
			if (i<j)
			{
				a[i] = a[j];
				i++;
			}
			while(i<j&&a[i]<=temp){
				i++;
			}
			if (i<j)
			{
				a[j] = a[i];
				j--;
			}
		}
		a[i] = temp;
		quickSort(a,low,i-1);
		quickSort(a,i+1,high);
		//一次循环确定一个位置
	}

}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int *a;
	a = (int*)malloc(n*sizeof(int));
	int i;
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	quickSort(a,0,n-1);

	for (i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}


	return 0;
}