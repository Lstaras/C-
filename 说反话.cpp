//未完成 栈的方法可以但是C语言的限制太复杂

#include<stdio.h>

struct stock{
	char *a[100];
	int top = -1;
};

int push(stock s,char c[]){
	s.top++;
	s.a[s.top] = c;
	return 1;
}

int pop(stock s){
	s.top--;
	return 1;
}

int main(int argc, char const *argv[])
{
	// char *str;
	// str="i am a boy!";
	
	char str[100];
	gets(str);
	//printf("%s\n",str);

	int i;
	stock s;
	for (i = 0; str[i+1] != 0 ; ++i)
	{
		
	}
	
	return 0;
}