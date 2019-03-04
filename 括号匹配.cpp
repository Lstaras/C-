/* {（）}”这种是括号匹配，而 “{ ] ] { ” 这种就不是括号匹配。
判断一个给定的括号字符串是否是匹配的。
对于括号匹配这类的问题可以使用 Stack来处理：
1 . 当碰到”( [ { “这些左括号就进栈。
2 . 如果碰到“) ] }”这些右括号时，如果栈为空，则肯定不匹配，返回false。如果栈不为空，则出栈比较两个括号是否匹配不匹配返回 false 。
3 . 如果遍历完整个括号串后栈为空返回true，否则返回false。
*/

#include<stdio.h>

int match(char *str){
	char stack[1000] = "";
	printf("stack=%s\n",stack);
	int i = 0;
	int j = 0;
	int mark = 1;
	while(str[i] != '\0'){
		if (str[i]=='(' || str[i]=='[' || str[i]=='{')
		{
			stack[j] = str[i];//进栈
			j++;
			printf("stack=%s\n",stack);
		}else if (stack != NULL)
		{
			if (str[i] == ')' && stack[j-1] =='(')  
			{
				stack[j-1] = '\0';//出栈
				continue;
			}else if (str[i] == ']' && stack[j-1] =='[')
			{
				stack[j-1] = '\0';//出栈
				continue;
			}else if (str[i] == '}' && stack[j-1] =='{')
			{
				stack[j-1] = '\0';//出栈
				continue;
			}
		}else if (stack == NULL && (str[i]==')' || str[i]==']' || str[i]=='}'))
		{
			return 0;
		}
		// else if (str[i]==')' && (stack == NULL || stack[j-1] != '('))
		// {
		// 	stack[j] = '\0';
		// 	mark = 0;
		// 	break;//无法匹配,跳出循环
		// }else if (str[i]==']' && (stack == NULL || stack[j-1] != '['))
		// {
		// 	stack[j] = '\0';
		// 	mark = 0;
		// 	break;//无法匹配,跳出循环
		// }else if (str[i]=='}' && (stack == NULL || stack[j-1] != '{'))
		// {
		// 	stack[j] = '\0';
		// 	mark = 0;
		// 	break;//无法匹配,跳出循环
		// }
		i++;
	}
	if (stack[0] != '\0')
	{
		mark = 0;
	}
	return mark;
}

int main(int argc, char const *argv[])
{
	char str[] = {};
	scanf("%s",str);
	printf("%s\n",str);
	if (match(str))
	{
		printf("aaaa\n");
	}else{
		printf("bbbb\n");
	}
	printf("%s\n",str);
	return 0;
}