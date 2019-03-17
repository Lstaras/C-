#include<stdio.h>

int Bsearch(int a[],int low,int high,int n){
	int count = 0;
	int mid = (low+high)/2;
	if (low<high)
	{
		count+=Bsearch(a,low,mid,n);
		count+=Bsearch(a,mid+1,high,n);
	}else{
		if (a[low]==n)
		{
			count++;
			printf("GET:%d---%d\n",low+1,n);
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int a[] = {4,5,1,99,14,5,7,2,3,77};
	int n;
	scanf("%d",&n);
	
	int count;
	count = Bsearch(a,0,9,n);
	printf("GET:%d\n",count);

	return 0;
}