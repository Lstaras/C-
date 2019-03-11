//此程序用于判断此时是否连成线（获胜）

#include<stdio.h>

int main(int argc, char const *argv[])
{
	const int size = 3;
	int board[size][size];
	int i,j;
	int numOfX;//X对角线方向个数标记
	int numOfO;//O对角线方向个数标记
	int numOfX1;//X行方向个数标记
	int numOfO1;//O行方向个数标记
	int numOfX2;//X列方向个数标记
	int numOfO2;//O列方向个数标记
	int result = -1;//1为X赢，0为O赢

	//读入数据，1为X，0为O
	for (i = 0; i < size; ++i){
		for (j = 0; j < size; ++j){
			scanf("%d",&board[i][j]);
		}
	}

	//检查行/列
	for (i = 0; i<size && result==-1; ++i){
		numOfO1 = numOfX1 = 0;
		numOFO2 = numOfX2 = 0;
		for (j = 0; j < size; ++j){
			if (board[i][j] == 1){
				numOfX1++;
			}else if (board[j][i] == 1){
				numOfX2++;
			}else if (board[i][j] == 0){
				numOfO1++;
			}else{
				numOFO2++;
			}
		}
		if (numOfO1 == size || numOFO2 == size){
			result = 0;
		}else if(numOfX1 == size || numOfX2 == size){
			result = 1;
		}
	}

	//检查对角线
	if (result == -1)
	{
		numOfO = numOfX = 0;
		for (i = 0; i < size; ++i)
		{
			if (board[i][i] == 1){
				numOfX++;
			}else{
				numOfO++;
			}
		}
		if (numOfO == size){
			result = 0;
		}else{
			result = 1;
		}
		
	}

	printf("%d\n",result);


	return 0;
}