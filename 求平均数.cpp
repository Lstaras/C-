#include<stdio.h>

int main(){
	printf("HELLO!\n");
	int a[100];
	int i;
	int x;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",a[i]);
	}
	for(i=0;i<x;i++){
		printf("%d",a[i]);
	}
	return 0;
}
