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

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int *a;
	a = getArray(n);
	//showArray(a,n);

	int i,j;
	for (i = 0; i < n; ++i)
	{
		int x;
		int min = a[i];
		for (j = i; j < n; ++j)
		{
			if (a[j]<min)
			{
				min = a[j];
				x = j;
			}
		}
		a[x] = a[i];
		a[i] = min;
	}

	showArray(a,n);

	free(a);
	
	return 0;
}

