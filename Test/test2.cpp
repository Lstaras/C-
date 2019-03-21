#include<stdio.h>
#include<stdlib.h>

int merge(int a[],int low,int mid,int high){

	int n1 = mid - low + 1;
	int n2 = high - mid;
	int L[n1];
	int R[n2];
	int i,j;
	for (i = 0; i < n1; ++i)
	{
		L[i] = a[low+i];
	}
	for (j = 0; j < n2; ++j)
	{
		R[j] = a[mid+1+j];
	}

	i = 0;
	j = 0;
	int k = low;
	while(i<n1&&j<n2){
		if (L[i]<=R[j])
		{
			a[k] = L[i];
			i++;
		}else{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k++] = L[i++];
	}
	while(j<n2){
		a[k++] = R[j++];
	}

	return 0;
}

int mergeSort(int a[],int low,int high){
	if (low<high)
	{
		int mid = (high + low) / 2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}

	return 0;
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


	return 0;
}