#include<stdio.h>

int search(int a[],int low,int high,int n){
	int count = 0;
	int mid = (low + high)/2;
	if (low<high)
	{
		count+=search(a,low,mid,n);
		count+=search(a,mid+1,high,n);
	}else{
		if (a[low]==n)
		{
			count++;
			printf("%d",low);
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int n;
	scanf("%d",&n);

	int count;
	count = search(a,0,9,n);
	printf("\ncount=%d\n",count);

	return 0;
}