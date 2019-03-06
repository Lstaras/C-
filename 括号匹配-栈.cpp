/* 
{（）}”这种是括号匹配，而 “{ ] ] { ” 这种就不是括号匹配。
判断一个给定的括号字符串是否是匹配的。
对于括号匹配这类的问题可以使用 Stack来处理：
1 . 当碰到”( [ { “这些左括号就进栈。
2 . 如果碰到“) ] }”这些右括号时，如果栈为空，则肯定不匹配，返回false。如果栈不为空，则出栈比较两个括号是否匹配不匹配返回 false 。
3 . 如果遍历完整个括号串后栈为空返回true，否则返回false。
*/

#include<stdio.h>

int match(char *str){
	char stack[1000];
	int top = -1;//初始化栈
	//printf("stack=%s\n",stack);
	int i = 0;
	while(str[i] != '\0'){
		if (str[i]=='(' || str[i]=='[' || str[i]=='{')
		{
			stack[++top] = str[i];//进栈
			//printf("%d\n",top);
			//printf("stack[j-1]=%c\n",stack[j-1]);
			//printf("stack=%s\n",stack);
		}else if (str[i]==')'){
			if (stack[top]=='(')
			{
				top--;
				//printf("%d\n",top);
			}else{
				return 0;
			}
		}else if (str[i]==']'){
			if (stack[top]=='[')
			{
				top--;
			}else{
				return 0;
			}
		}else if (str[i]=='}'){
			if (stack[top]=='{')
			{
				top--;
			}else{
				return 0;
			}
		}
		i++;
	}
	//不管栈的具体情况，只用top来判断即可
	if (top==-1)
	{
		return 1;
	}else{
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	char str[] = {};
	scanf("%s",str);
	//printf("%s\n",str);
	if (match(str))
	{
		printf("OK\n");
	}else{
		printf("NO\n");
	}
	return 0;
}