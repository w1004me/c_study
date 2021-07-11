#include <stdio.h>

int main(void)
{
    int user_input=10000;//사람이 지급한 금액
    int item_price = 5300;//물건의 가격
    int change_money = user_input-item_price;
    printf("받은 금액 :  %d, 물건 가격 : %d, 거스름 돈: %d\r\n",
        user_input, item_price, change_money);
    printf("1000원의 갯수 : %d\r\n",change_money/1000);
    printf("500원의 갯수 : %d\r\n",(change_money%1000)/500);
    printf("100원의 갯수 : %d\r\n",((change_money%1000)%500)/100);
    return 0;
}