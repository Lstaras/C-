#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int number;
	printf("??????????????");
	scanf("%d\n",number);
	int *a;
	a = (int *)malloc(number*sizeof(int));

	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	}

	int *p;
	p = &a[0];
	int j = 0;

	//for(i=0;i<number;i++){
	//	printf("%d ",a[i]);
	//}

	while(j<sizeof(a)/sizeof(a[0])){
		printf("%d ",*a++);
		j++;
	}

	free(a);

	return 0;
}