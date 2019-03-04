#include <stdio.h>

void base2(int n) {
    if (n == 1) {
        printf("%d", n);
    } else {
    //以下两行的顺序不能颠倒
        base2(n / 2);
        base2(n % 2);
    }
}

void base8(int n){
    if (n <= 7)
    {
        printf("%d", n);
    }else{
        base8(n / 8);
        base8(n % 8);
    }
}

void base16(int n){
    if (n <= 15)
    {
        if (n <= 9)
        {
            printf("%d", n);
        }else{
            switch(n){
                case 10:printf("A");break;
                case 11:printf("B");break;
                case 12:printf("C");break;
                case 13:printf("D");break;
                case 14:printf("E");break;
                case 15:printf("F");break;
            }
        }
    }else{
        base16(n / 16);
        base16(n % 16);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    base8(n);//有二进制、八进制、十六进制可用
    printf("\n");
    return 0;
}