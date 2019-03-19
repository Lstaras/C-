//元素必须是有序的，如果是无序的则要先进行排序操作

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
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int n;
	scanf("%d",&n);
	
	int count;
	count = Bsearch(a,0,9,n);
	printf("GET:%d\n",count);

	return 0;
}