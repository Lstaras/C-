#include<stdio.h>
#include<stdlib.h>

int merge(int arr[],int low,int mid,int high){
	int count;//
	int i;
	int j;
	int k;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	int L[n1],R[n2];
	for (int i = 0; i < n1; ++i)
	{
		L[i] = arr[low+i];
	}
	for (int j = 0; j < n2; ++j)
	{
		R[j] = arr[mid+1+j];
	}
	i = 0;
	j = 0;
	k = low;
	while(i<n1 && j<n2){
		if (L[i]<=R[j])
		{
			arr[k] = L[i++];
		}else{
			arr[k] = R[j++];
		}
		count++;//
		k++;
	}
	while(i<n1){
		arr[k++] = L[i++];
	}
	while(j<n2){
		arr[k++] = R[j++];
	}
	return count;
}

int mergeSort(int arr[],int low,int high){
	int count=0;
	if (low<high)
	{
		int mid = (low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		count+=merge(arr,low,mid,high);
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int count;
	int n;
	scanf("%d\n",&n);
	int *a;
	a = (int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	count=mergeSort(a,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n%d\n",count);//输出
	

	return 0;
}