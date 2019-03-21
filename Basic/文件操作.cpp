//文件操作练习

//文件打开
//fopen("filename","mode");
//filename:文件地址
//mode:访问模式
//mode:{r,w,a,r+,w+,a+}---文本文件
//二进制文件加b

//文件写入
//fprintf(FILE*,"content");
//fputs("content",FILE*);

//文件读取
//fgetc(FILE*);
//fgets(char *缓冲区,int 读取长度,FILE*);
//读取的长度包括结尾的0，故只读取n-1个字符

//文件关闭
//fclose(FILE*);

#include<stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp = NULL;//初始化一个文件指针
	fp = fopen("/tmp/test.txt","w+");//打开文件
	//fprintf(fp,"啦啦啦啦啦啦啦啦啦\n");
	char s[] = "cacaccacacacacacaca";
	fputs(s,fp);

	char str[1024];
    fgets(str,1024,fp);
    printf("%s\n",s);
    

	return 0;
}