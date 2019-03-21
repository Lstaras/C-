#include<stdio.h>

int base16(int n){

	if (n<=9)
	{
		printf("%d",n);
	}else if(n>=10&&n<=15){
		switch(n){
			case 10:printf("A");break;
			case 11:printf("B");break;
			case 12:printf("C");break;
			case 13:printf("D");break;
			case 14:printf("E");break;
			case 15:printf("F");break;
		}
	}else{
		base16(n/16);
		base16(n%16);
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	//转十六进制
	base16(n);

	printf("\n");
	return 0;
}