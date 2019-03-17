#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a = 1;
	while(a<=500){
		if(a%2==1&&a%3==2&&a%5==4&&a%6==5&&a%7==0){
			printf("%d\n",a);
			break;
		}
		a++;
	}
	return 0;
}