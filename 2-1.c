#include <stdio.h>

#define MAX 100 


int main(){
    int a;    //상품개수
    int in[MAX];    //입고
    int out[MAX];   //판매
    int stock[MAX];   //재고 수량
    int id;
    
    scanf("%d" , &a);      //상품개수 입력
    
    for(int i = 0; i < a; i++) {    //in << 입고 수량 입력
        scanf("%1d", &in[i]);
    }
    
    
    for(int i = 0; i < a; i++) { // << out판매수량입력
        scanf("%1d", &out[i]);
    }
    
    scanf("%d" , &id);      // id 입력
    
    for(int i = 0; i < a; i++){     //재고 조사 입고-판매 = 재고
        stock[i] = in[i] - out[i];
    }
    
    
    printf("%d\n" , stock[id -  1]);
    
    for (int i = 0; i < a; i++){
        printf("%d" , stock[i]);
    }
    printf("\n");
    
    return 0;
    
    
}
