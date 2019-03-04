#include<stdio.h>
#include<stdlib.h>


typedef struct zhan{
    int data;
    struct zhan *next;
}zhan,*ZhanL;

/**
 * 初始化栈
 * */
ZhanL initZhan(){
    ZhanL L =(ZhanL)malloc(sizeof(zhan));//创建一个头结点L
    L->next=NULL;
    return L;
}

/**
 * 进栈操作
 * */
int push(ZhanL &L,int data){
    //创建一个新的结点，采用头插法加入这个结点
    ZhanL p=(ZhanL)malloc(sizeof(zhan));
    p->data=data;
    p->next = L;
    L = p;
    return 0;
}
int pop(ZhanL &L){
    if(L->next){
        ZhanL s=L;//释放空间用
        printf("%d ",s->data);
        L = L->next;
        if(L->next){
//            printf("栈顶%d \n",L->data);
        } else{
            printf("栈空\n");
        }
        free(s);
    }
    return 0;
}

/**
 * 转换方法
 * */
 int zhuanhuan(ZhanL &L,int data,int jz){
     while (data){
         push(L,data%jz);
         data = data/jz;
     }

     while (L){
         pop(L);
     }
    return 0;
 }

 int main(){
    ZhanL L;
    L=initZhan();
    printf("请输入一个十进制数");
    int data,jz;
    scanf("%d",&data);
    printf("请输入转换的进制");
    scanf("%d",&jz);
    zhuanhuan(L,data,jz);
    return 0;
}