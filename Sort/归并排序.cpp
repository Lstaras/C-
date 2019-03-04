#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int low,int mid,int high){
	//将两个数组中有序子表归并为一个有序表
	//子表为(low---mid)和(mid+1---high)
	int i,j,k;
	int n1 = mid - low + 1;//前子表长度
	int n2 = high - mid;//后子表长度
	//将子表暂存在这两个数组中
	int *L;
	int *R;
	L = (int*)malloc(n1*sizeof(int));
	R = (int*)malloc(n2*sizeof(int));
	for (i = 0; i < n1; ++i)
	{
		L[i] = arr[low + i];
	}
	for (j = 0; j < n2; ++j)
	{
		R[j] = arr[mid + 1 +j];
	}
	//printf("oooo\n");

	//归并的关键过程
	i = 0;//L、R均从头开始遍历
	j = 0;
	k = low;//arr从头写入

	//L与R均未读完
	while(i < n1 && j < n2)
	{
		if (L[i] <= R[j])//较小者写入arr，并自增1
		{
			arr[k] = L[i++];
		}else{
			arr[k] = R[j++];
		}
		k++;//arr自增1
	}
	//此时L或R已读完
	while(i < n1){
		arr[k++] = L[i++];
	}
	while(j < n2){
		arr[k++] = R[j++];
	}
	free(L);
	free(R);
}//merge在归并的最底层是大材小用（只起到单个大小交换），但是在最高层却是两大有序表的归并，故要考虑到各种情况

void mergeSort(int arr[],int low,int high){
	if (low < high)
	{
		//printf("la\n");
		int mid = (low + high)/2;
		mergeSort(arr,low,mid);
		//printf("pa\n");
		mergeSort(arr,mid+1,high);
		//printf("papapa\n");
		merge(arr,low,mid,high);
		//printf("lalala\n");
	}
}




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

	mergeSort(a,0,n-1);

	showArray(a,n);

	free(a);
	return 0;
}