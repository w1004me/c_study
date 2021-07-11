#include "test2.h"

void print_info()
{
    printf("연산식을 입력하세요\r\n");
    printf("ex) 3+4, 7-6, 12*4, 6/2\r\n");
    printf("종료를 원하실 경우 연산기호에 n을 입력하세요");
    printf("ex) 1n1\r\n");
}
struct modify scan_modify(void)
{
    struct modify md;
    printf("식: ");
    scanf("%d%c%d", &md.num[0],&md.symbol,&md.num[1]);
    return md;
}
void plus(int num[2])
{
    printf("%d + %d = %d\r\n",num[0], num[1], num[0]+num[1]);
}
void minus(int num[2])
{
    printf("%d - %d = %d\r\n",num[0], num[1], num[0]-num[1]);
}
void multiply(int num[2])
{
    printf("%d * %d = %d\r\n",num[0], num[1], num[0]*num[1]);
}
void division(int num[2])
{
    printf("%d // %d = %d...%d\r\n",num[0], num[1], num[0]/num[1],num[0]%num[1]);
}