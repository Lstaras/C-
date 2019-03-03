#include<stdio.h>

int main(){
	int x;
	int number[100];
	double sum = 0;
	int cnt = 0;
	scanf("%d",&x);
	while (x!=-1){
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d",&x);//Ñ­»·¶ÁÈ¡
	}
	if(cnt>0){
		printf("%lf\n",sum/cnt);
		int i;
		for(i=0;i<cnt;i++){
			if(number[i]>sum/cnt){
				printf("%d\t",number[i]);
			}
		}
		printf("\n");
	}
	return 0;
}