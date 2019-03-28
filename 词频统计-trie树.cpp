//未完成

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
	struct TNode *next[26] = {NULL};
	int count;
}TNode;

//判断字母是否在当前的结点下
int isExist(TNode a,char c){
	int i = 0;
	while(a.next[i]){
		if(a.next[i]->data == c){
			return i;
		}
		i++;
	}
	return -1;//返回元素的位置，没有匹配到则返回-1
}

//寻找下一个可连接的位置
int isNext(TNode a){
	int i = 0;
	while(a.next[i]){
		i++;
	}
	return i;//返回可供链接的下一个元素位置
}

//在t之下链接一个字母
int collect(Tnode *t,char alphabet){
	if (isExist(&t,alphabet) == -1)
	{
		int i = isNext(t);
		TNode *x;
		x.data = alphabet;
		x.count = 0;
		t.next[i] = x;//将x链接到t
	}else{
		int i;
		for (i = 0; i < isNext(t); ++i)
		{
			if (alphabet == t.next[i]->data)
			{
				t.next->count++;
			}
		}
	}
	return i;
}

int main(int argc, char const *argv[])
{
	FILE *fp;
	fp = fopen("",);//读入文件


	TNode *t;//定义根结点
	t.data = NULL;//根节点不定义数据
	t.count = 0;



	return 0;
}