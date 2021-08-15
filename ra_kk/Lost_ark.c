#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> // time()함수 포함 라이브러리

struct char_info run_gambling(struct char_info ci);
void print_char_info(struct char_info ci);

char *weapon[12]={
    "[전설]황홀 카나리아의 마법 덱", "[전설]밤 카나리아의 마법 덱",
    "[영웅]푸른 장미의 심장 마법 덱", "[영웅]태양의 십자 마법 덱",
    "[영웅]칠흑의 십자 마법 덱","[영웅]차분한 사파이어 마법 덱",
    "[영웅]은빛 갈퀴의 마법 덱","[영웅]빛나는 검은 뿔마법 덱",
    "[영웅]붉은 장미의 심장 바법 덱","[영웅]광기의 푸른 뿔 마법 덱",
    "[영웅]고용한 크리스탈 마법 덱","[영웅]검은 꼬리의 마법 덱"};

int weapon_percentage[13]={-1, 5, 10, 19, 28,37,46,55,64,73,82,91,100};

struct char_info{
    char name[20];
    char weapon[50];
    char top_armor[50];
    char pants_armor[50];
    char helm[50];
};

void main(void)
{    
    struct char_info ci;
    int quit = 1;
    int user_input = 0;
    srand(time(NULL));
    printf("Lost Ark 아바타 뽑기 시뮬레이션\r\n");
    printf("사용할 케릭터 명을 입력해주세요: 영문\r\n");
    scanf("%s",ci.name);
    strcpy(ci.weapon,"null");
    strcpy(ci.top_armor,"null");
    strcpy(ci.pants_armor,"null");
    strcpy(ci.helm,"null");

    while(quit != 0)
    {
        printf("부위를 선택하세요\r\n");
        printf("1.무기 2.머리, 3.상의, 4.하의, 5.케릭터 정보확인 6. 나가기 \r\n");
        scanf("%d",&user_input);
        switch(user_input)
        {
            case 1:
                ci = run_gambling(ci);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                print_char_info(ci);
                break;
            case 6:
                printf("시뮬레이션 종료\r\n");
                quit = 0;
                break;
            default:
                printf("잘못 입력하셨습니다.\r\n");
                break;
            
        }
    }
}

struct char_info run_gambling(struct char_info ci)
{
    int user_input = 0;
    print_char_info(ci);
    int r = rand()%100; 
    for(int i =0; i<13;i++)
    {
        if(r > weapon_percentage[i] && r <= weapon_percentage[i+1])
        {
            printf("%d: %s\r\n",i, weapon[i]);
            printf("장비를 착용하시겠습니까? yes = 1, no = 0\r\n");
            scanf("%d",&user_input);
            if(user_input == 1)
            {
                strcpy(ci.weapon, weapon[i]);
            }
        }
    }
    return ci;
}

void print_char_info(struct char_info ci)
{
    printf("케릭명 : %s\r\n",ci.name);
    printf("무기 : %s\r\n",ci.weapon);
    printf("투구 : %s\r\n",ci.helm);
    printf("상의 : %s\r\n",ci.top_armor);
    printf("하의 : %s\r\n",ci.pants_armor);
}