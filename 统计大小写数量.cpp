#include<stdio.h>

int main(int argc, char const *argv[])
{
	char a[];
	gets(a);
	//printf("%s\n",a);
	int i = 0;
	int j = 0;
	int k = 0;
	while(a[i]!=0){
		if (a[i]>=65&&a[i]<=90)
		{
			j++;
		}else if (a[i]>=97&&a[i]<=122)
		{
			k++;
		}
	}
	printf("UPER:%d\n",j);
	printf("DOWN:%d\n",k);
	return 0;
}