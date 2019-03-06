//法一：map<key,value>
//法二：树形结构，树的根节点为root，
// 树中每个节点都有属性count会记录对应路径上的字符个数，
// 路径则是从根节点指向其26个子节点的指针（每一条路径代表一个英文字母）。
// 比如文章为“apple，apple，honey”，则第一个字符为a,那通过之前的算法，就在根节点root下创建一个孩子树，
// 且将”根节点“转移到存有字符a的路径上指向的子节点，之后是字符p,依次往下，直到读到‘，’说明一个单词读完，
// 这时会在当前子节点的属性进行count++；以此类推，会读完整个文章，之后用深度优先搜索进行遍历单词树，
// 再将对应单词存在队列中。最后Collections来进行次数排序。 


#include<stdio.h>

typedef struct TNode
{
	char data;
	struct TNode *next;
}TNode;

int main(int argc, char const *argv[])
{
	char a[1000]="";
	gets(a);
	//puts(a);

	return 0;
}