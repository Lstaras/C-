#include<stdio.h>

void merge(int arr[],int low,int mid,int high){
	//将两个数组中有序子表归并为一个有序表
	//子表为(low---mid)和(mid+1---high)
	int i,j,k;
	int n1 = mid - low + 1;//前子表长度
	int n2 = high - mid;//后子表长度
	//将子表暂存在这两个数组中
	int L[n1],R[n2];
	for (int i = 0; i < n1; ++i)
	{
		L[i] = arr[low + i];
	}
	for (int j = 0; j < n2; ++i)
	{
		R[j] = arr[mid + 1 +j];
	}

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
}//merge在归并的最底层是大材小用（只起到单个大小交换），但是在最高层却是两大有序表的归并，故要考虑到各种情况

void mergeSort(int arr[],int low,int high){
	if (low < high)
	{
		int mid = (low + high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}





int main(int argc, char const *argv[])
{
	
	return 0;
}